#include <iostream>
#include <cmath>
using namespace std;
int main()


// 2 TASK
{
    int n;
    double res = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        res += 1./(i*i + (i+1));
    }
    cout << res;
    
}


// 3 TASK
{
    int n, m, a, a_res = 1, res = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a;
            a_res*=a;
        }
        res+=a_res;
    }
    cout << res;
    
}

// 4 TASK

{
    int n, m, a, a_res = 1, min;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        min = a;
        for (int j = 1; j < m; j++)
        {
            cin >> a;
            min < a ? min = a : min = min;
        }
        a_res *= min;
    }
    cout << a_res;
}

// 5 TASK

{
    int n, m, a, a_res = 1, max;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        max = a;
        for (int j = 1; j < m; j++)
        {
            cin >> a;
            max < a ? max = a : max = max;
        }
        a_res *= max;
    }
    cout << a_res;
}

// 6 TASK

{
    for (int i = 2; i < 101; i++)
    {
        int cnt = 0;
        for (int j = 2; j < i; j++)
        {
            if (i%j == 0)
            {
                cnt++;
            }
            
        }
        if (cnt == 0)
        {
            cout << i << " ";
        }
        
    }
    
}

// 7 TASK

{
    int n;
    long double res = 0;
    cin >> n;
    for (int k = 1; k <= n; k++)
    {
        int k_pow = k*k, res_fact = 1;
        for (int i = 1; i <= k_pow; i++)
        {
            res_fact *= i;
        }
        res += 1./(res_fact);
        
    }
    cout << res;
    
}

// 8 TASK

{
    int x;
    cin >> x;
    while(x!=0){
        if (x>0){
            for (int i = 1; i <= x; i++){
                cout << "+";
            }  
            cout << "; ";   
        }
        cin >> x;
    }
}



