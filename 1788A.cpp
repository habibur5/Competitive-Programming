#include <bits/stdc++.h>
using namespace std;
long long t, n, cnt, i, b[1000], x;
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        cnt = 0;
        for (i = 1; i <= n; i++)
        {
            cin >> x;
            if (x == 2)
            {
                b[cnt+1] = i;
                cnt++;
            }
        }
        if (cnt == 0)
        {
            cout << 1 << endl;
            continue;
        }
        printf("%lld\n", cnt % 2 ? -1 : b[cnt / 2]);
    }
    return 0;
}

/* #include <bits/stdc++.h>


#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        int count = 0;
        cin>>n;
        ll arr[n];
        for(int i = 0; i<n; i++){
            cin>>arr[i];
            if(arr[i]==2){
                count++;
            }
        }
        if(count == 0 ){
            cout<<1<<endl;
        }
        else if(count%2==0){
            count = count/2;
            ll ss = 0;
            int i;
            for(i = 0; ss != count; i++){

                if(arr[i]==2){
                    ss++;
                }
            }
            cout<<i<<endl;
        }else{
            cout<<-1<<endl;
        }
    }

    return 0;
}
 */