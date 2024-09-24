from autoclone import AutoClone

if __name__ == "__main__":
    time_range = (3600 * 24) * 7 * 50  # three weeks
    AutoClone(time_range)()
