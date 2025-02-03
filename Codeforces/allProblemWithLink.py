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
            contest_id = submission['problem']['contestId']
            index = submission['problem']['index']
            problem_id = f"{contest_id}-{index}"
            solved_problems.add((problem_id, contest_id, index))
    
    return solved_problems

def fetch_all_problems(handles):
    all_problems = {}
    for handle in handles:
        all_problems[handle] = get_solved_problems(handle)
    return all_problems

def save_to_excel(problems_dict, filename="solved_problems.xlsx"):
    unique_problems = sorted(set(problem for problems in problems_dict.values() for problem in problems))
    data = {handle: [] for handle in problems_dict.keys()}
    
    excel_data = []
    for problem_id, contest_id, index in unique_problems:
        row = {"Problem": f'=HYPERLINK("https://codeforces.com/problemset/problem/{problem_id[:1]}/{index}", "{problem_id}")'}
        for handle in problems_dict.keys():
            row[handle] = problem_id if (problem_id, contest_id, index) in problems_dict[handle] else None
        excel_data.append(row)
    
    df = pd.DataFrame(excel_data)
    df.to_excel(filename, index=False)
    print(f"Data saved to {filename}")

def main():
    users = input("Enter Codeforces handles (comma separated): ").split(",")
    users = [user.strip() for user in users]
    
    all_problems = fetch_all_problems(users)
    save_to_excel(all_problems)

if __name__ == "__main__":
    main()
