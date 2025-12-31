def superDigit(n, k):
    # Calculate the initial sum of digits of n
    initial_sum = sum(int(d) for d in str(n))
    total_sum = initial_sum * k
    def get_super_digit(x):
        if x < 10:
            return x
        else:
            return get_super_digit(sum(int(d) for d in str(x)))
    return get_super_digit(total_sum)
n = 148
k = 3
print(superDigit(n, k))