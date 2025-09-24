// 	// #include<bits/stdc++.h>
// 	// using namespace std;

// 	// string revo(string s, int n){
// 	// 	// string res = "";
// 	// 	// for(int i=0;i<n;i++){
// 	// 	// 	res=res + s[n-1-i];
// 	// 	// }
// 	// 	// return res;
// 	// 	string rev = s.substr(s.size()-n, n);
// 	// 	reverse(rev.begin(), rev.end());
// 	// 	return rev;
// 	// }

// 	// int main(){
// 	// 	int t;
// 	// 	cin>>t;
// 	// 	string all = "qwertyuiopasdfghjklzxcvbnm";
// 	// 	while(t--){
// 	// 		int n, a, b;
// 	// 		cin>>n>>a>>b;
// 	// 		string disting_b = all.substr(0,b);
// 	// 		string unique = disting_b;
// 	// 		if(a-b>0){
// 	// 			string reso = disting_b((b-(a-b)), (a-b));
// 	// 			reverse(reso.begin(), reso.end());
// 	// 			unique+=reso;
// 	// 		}

// 	// 		// string final = unique*(n/a) + unique.substr(0, n%a);
// 	// 		string final = "";
// 	// 		for(int i=0;i<n/a;i++){
// 	// 			final+=unique;
// 	// 		}
// 	// 		final+=unique.substr(0, n%a);

// 	// 		cout<<final<<endl;
// 	// 	}
// 	// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     string all = "qwertyuiopasdfghjklzxcvbnm";
//     while (t--) {
//         int n, a, b;
//         cin >> n >> a >> b;

//         string disting_b = all.substr(0, b);
//         string unique = disting_b;

//         if (a - b > 0) {
//             // take last (a-b) chars from disting_b and reverse them
//             string reso = disting_b.substr(b - (a - b), a - b);
//             reverse(reso.begin(), reso.end());
//             unique += reso;
//         }

//         string final = "";
//         for (int i = 0; i < n / a; i++) {
//             final += unique;
//         }
//         final += unique.substr(0, n % a);

//         cout << final << endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";

    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        // Build block of length a
        string block = "";
        for (int i = 0; i < a; i++) {
            block += alphabet[i % b]; // cycle through first b letters
        }

        // Build final string of length n
        string result = "";
        for (int i = 0; i < n; i++) {
            result += block[i % a];
        }

        cout << result << "\n";
    }
    return 0;
}
