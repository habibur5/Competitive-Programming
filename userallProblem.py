import requests
import pandas as pd

def get_solved_problems(handle):
    url = f"https://codeforces.com/api/user.status?handle={handle}&from=1&count=10000"
    response = requests.get(url).json()
    
    if response["status"] != "OK":
        print(f"Error fetching data for {handle}")
        return set()
    
    solved_problems = set()
    for submission in response["result"]:
        if submission["verdict"] == "OK":
            problem_id = f"{submission['problem']['contestId']}-{submission['problem']['index']}"
            solved_problems.add(problem_id)
    
    return solved_problems

def fetch_all_problems(handles):
    all_problems = {}
    for handle in handles:
        all_problems[handle] = get_solved_problems(handle)
    return all_problems

def save_to_excel(problems_dict, filename="solved_problems.xlsx"):
    data = []
    for user, problems in problems_dict.items():
        for problem in problems:
            data.append([user, problem])
    
    df = pd.DataFrame(data, columns=["User", "Problem"])
    df.to_excel(filename, index=False)
    print(f"Data saved to {filename}")

def main():
    users = input("Enter Codeforces handles (comma separated): ").split(",")
    users = [user.strip() for user in users]
    
    all_problems = fetch_all_problems(users)
    save_to_excel(all_problems)

if __name__ == "__main__":
    main()
