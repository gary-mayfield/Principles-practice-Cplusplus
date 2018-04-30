def is_leapyear(year):
    if ((year % 4 == 0) and (year % 100 != 0)) or (year % 400 == 0):
        return True
    else:
        return False


for _ in range(1900, 2021):
    print(_, ':', is_leapyear(_))