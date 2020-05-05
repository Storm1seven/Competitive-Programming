petr, inc, driver, dec = map(int, input().split())
if (petr > driver):
    print(petr)
    exit()
while True:
    if petr+inc <= driver:
        petr+=inc
    else:
        print(driver)
        exit()
    if driver-dec >= petr:
        driver-=dec
    else:
        print(petr)
        exit()