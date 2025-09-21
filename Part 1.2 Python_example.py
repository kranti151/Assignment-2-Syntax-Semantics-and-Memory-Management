# python_closure.py
def make_multiplier(n):
    def multiplier(x):
        return x * n   # 'n' captured from outer scope (closure)
    return multiplier

times3 = make_multiplier(3)
print(times3(10))  # 30
