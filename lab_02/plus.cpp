#include <iostream>
#include <cmath>
#include <chrono>

using namespace std;

double f(double x) {
    return pow(x, 2) - pow(x, 2) + 4 * x -5 * x + x + x;
}

int main() {
    int n; 
    const double pi = 3.1415; /// const vs comstexpr

    cout << "Type integer:" << endl;
    while (true){
        if (cin >> n) {

            auto begin = std::chrono::steady_clock::now(); /// auto
            
            for (int i = 0; i < n; i++) {
                f(pi);
            };

            auto end = std::chrono::steady_clock::now();

            auto elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);

            cout << "The time: " << elapsed_ms.count() << " ns\n";
            
            break;
        }
        else {
            cout << "Problem with dtype" << endl;
            break;
        }
    }    
    return 0;
}