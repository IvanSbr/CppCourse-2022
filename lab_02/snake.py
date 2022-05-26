import  time
import datetime 


x = 3.1415

def f(x):
    return x ** 2 - x ** 2 + 4 * x - 5  * x + x + x


if __name__ == "__main__":

    n = input('Type integer:')
    try:
        n = int(n)
    except:
        print("Problem with dtype")
        quit()

    start_time = time.time()
    for i in range(n + 1):
        f(x)
    end_time = time.time()
    print((str(datetime.timedelta(seconds=end_time - start_time).total_seconds())) + ' s')
