import requests

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

def find_common_problems(handles):
    if not handles:
        return set()
    
    common_problems = get_solved_problems(handles[0])
    for handle in handles[1:]:
        common_problems &= get_solved_problems(handle)
    
    return common_problems

if __name__ == "__main__":
    users = input("Enter Codeforces handles (comma separated): ").split(",")
    users = [user.strip() for user in users]
    
    common_problems = find_common_problems(users)
    
    if common_problems:
        print("Commonly solved problems:")
        for problem in sorted(common_problems):
            print(problem)
    else:
        print("No common problems found.")
