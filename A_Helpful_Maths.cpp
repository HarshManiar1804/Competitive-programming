#include <bits/stdc++.h>
using namespace std;
// int main()
// {
//     string s;
//     int len = 0;
//     cin >> s;

//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s[i] == '+')
//         {
//             cout << '+';
//         }
//         else if (s[i] != '+')
//         {
//             while (len != s.length() / 2)
//             {
//                 for (int j = 0;; j += 2)
//                 {
//                     if (s[j] >= s[j + 2])
//                     {
//                         char temp = s[j];
//                         s[j] = s[j + 2];
//                         s[j + 2] = temp;

//                         cout<<s[j]<<" " <<s[j+1];
//                     }
//                 }
//                 len++;
//             }
//         }
//         else
//         {
//             cout << s[i];
//         }
//         cout << s;
//         return 0;
//     }
// }



int main() {
	int arr[1001];
	string s;
	cin>>s;
	int count=0;
	for(int i=0;i<s.size();i++){
	    if(s[i]=='+'){
	        continue;
	    }else{
	        arr[count++]=s[i]-'0';
	    }
	}
	sort(arr,arr+count);
	for(int i=0;i<count;i++){
	    cout<<arr[i];
	    if(i==count-1){
	        break;
	    }
	    cout<<"+";
	}
	return 0;
}
//baki
