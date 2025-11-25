
//    #include<iostream>
//  #include <cctype>
// #include<cmath>
// #include<string>
// using namespace std;
//  int main(){
//      double a;
//      cin>>a;
//      double result= pow(a,b);
//      double result = fmod(a,b);
//      double result =floor(a);
//      double result =ceil(b);
//       double result =round(a);
//      double result =trunc(a);
//      cout <<result<<endl;
//       string name ="MaZEn";
//       int namesize=name.size();
//        for(int i=0;i<namesize;i++)
//        {
//          if(isupper(name[i])){
//              cout<<char(tolower(name[i]))<<endl;
//          }
//          else{
//              cout<<char(toupper(name[i]))<<endl;
//          }
//        }
//      string F1,S1;
//         cin>>F1>>S1;
//      string F2,S2;
//         cin>>F2>>S2;
//         if (S1==S2)
//         {
//          cout<<"ARE Brother"<<endl;
//         }
//          else
//           {
//            cout<<"NOT"<< endl;
//          }

//  double N;
//  cin>>N;
//  if(N== N(int))
//  {
//      cout<< "int "<< N<<endl;
//  }
//  if(N == float(N))
//  {
//      cout<< "float "<< N<<endl;
//  }
//  }
//   void display (int x )
//  {
//      if (x<0)
//      cout<<"there is Error "<<endl;

//      else
//      cout<<"num be positive "<<  x  <<endl;
//  }
//  void division (int s  )
//  {
//      if (s % 2==0)
//      cout<< "even number" <<endl;
//      else{
//         cout<<"odd number"<<endl;
//      }
//  }
//   int main()
//   {
//      int num;
//      cin>>num;
//      division (num);
//     //   division (77,'%');
//      return 0;
//    }
// // int main()
// // {
// //    double num;
// //    cin>> num;
// //    double x=sqrt(num);
// //    cout<<x<<endl;
// //    double y =pow(num,2);
// //    cout<< y <<endl;
// // }
// struct mazen (
//    int id;
//    float gpa;
//    string name;
// )
// int main()
// {
// double emp[100]={100,2000,30000};
// cout<<emp[0]<<endl;
// emp[0]=2;
// cout<<emp[0]<<endl;
// for(int i=0;i<3;++i)
// {
//  cin>>emp[i];
// }
// for(int i=0;i<100;++i)
// {
//  cout<<emp[i]<<endl;
// }
// struct mazen (
//    int id;
//    float gpa;
//    string name;

// )
//    mazen mazen [30] ={{4241431,3.3, "mazen"}};
//    cout <<mazen [0].name<<emdl;
//    cout <<mazen [0].id<<emdl;
//    cout <<mazen [0].gpa<<emdl;
//    cout<<"enter mazen gpa "<<endl;
//    cin>>mazen[0].gpa;
//    cout<<"after update"<<endl;
//    cout <<mazen [0].name<<emdl;
//    cout <<mazen [0].id<<emdl;
//    cout <<mazen [0].gpa<<emdl;
// }
// int main()
// {
//    int n,x,max;
//    cin>>n>>max;
//    for(int i=1;i<n;++i)
//    {

//       cin>>x;
//       if(x>max) max=x;
//    }
//    cout<<max<<endl;

// }
// #include <iostream>
// #include <vector>
// using namespace std;
// struct Student
// {
//    string name;
//    int id;
//    double gpa;
//    int level;
//    int group;

// };
// vector<Student> students;
// void addstudent()
// {
//    Student m;
//    cout<<"Enter student name"<<endl;
//    cin>> m.name;
//    cout<<"Enter student id"<<endl;
//    cin>>m.id;
//    cout<<"Enter student level"<<endl;
//    cin>>m.level;
//    cout<<"Enter student gpa"<<endl;
//    cin>>m.gpa;
//    cout<<"Enter student group"<<endl;
//    cin>>m.group;
//    students.push_back(m);
//    cout<<"student add successfully"<<endl;
// }
// void moazstudent()
// {
//    int id;
//    cout<<"Enter studens id for update "<<endl;
//    cin>>id;
//    for(int i=0;i<students.size();i++)
//    if (students[i].id==id)
//    {
//       cout<<"Enter id"<<endl;
//       cin>>students[i].id;
//       cout<<"Enter name"<<endl;
//       cin>>students[i].name;
//       cout<<"Enter gpa"<<endl;
//       cin>>students[i].gpa;
//       cout<<"Enter level"<<endl;
//       cin>>students[i].level;
//       cout<<" Enter group"<<endl;
//       cin>>students[i].group;
//   }
// }
// int main()
// {
//    addstudent();
//    moazstudent();
//    return 0;

// #include <iostream>
// #include <string>
// using namespace std;

// struct course {
//    string name;
//    int  code;
//    int counthours;
// };

// struct student {
//    string name;
//    int id;
//    int level;
//    string group;
//    double gpa;
//    int hours[5];
//    string coursename[5];
//    int course[5];
//    float degrees[5];
//    int courseCount;
// };

// student Students[120];
// int countStudents = 0;

// void addstudent()
// {
//    student m;
//    cout << "Enter the name ";
//    cin >.courseCount
//   > m.name;
//    cout << "Enter the id ";
//    cin >> m.id;
//    cout << "Enter the level ";
//    cin >> m.level;
//    cout << "Enter the group ";
//    cin >> m.group;
//    cout << "Enter the GPA ";
//    cin >> m.gpa;

//    cout << "How many courses? (max 5) ";
//    cin >> m.courseCount;
//    if (m.courseCount > 5) m.courseCount = 5;

//    for (int i = 0; i < m.courseCount; i++) {
//       cout<<" Enter the name"<<endl;
//       cin>>m.coursename[i];
//        cout << "Enter course code ";
//        cin >> m.course[i];
//        cout << "Enter degree: ";
//        cin >> m.degrees[i];
//        cout<<"Enter the hours"<<endl;
//        cin>>m.hours[i];
//    }

//    Students[countStudents++] = m;
//    cout << "Student added successfully.\n";
// }

// int main() {
//    char addMore = 'y';
//     while (countStudents < 120  && addMore == 'y') {
//         addstudent();
//         cout << "Do you want to add another student? (y/n): ";
//         cin >> addMore;}
//         cout<<"finished adding student"<<endl;
//    return 0;
// }
// #include <iostream>
// #include <string>
// using namespace std;

// struct student
// {
//     string name;
//     int id;
//     int level;
//     string group;
//     double gpa;
// };

// student students[120];
// int studentNum = 0; // عدد الطلاب الحالي في المصفوفة

// // دالة لتحديث بيانات الطالب أو حذف الطالب بناءً على اختيارات المستخدم
// void updateOrDeleteStudent() {
//     int id;
//     int choice;

//     cout << "Enter student ID to update or delete: ";
//     cin >> id;

//     // البحث عن الطالب باستخدام الـ ID
//     for (int i = 0; i < studentNum; i++) {
//         if (students[i].id == id) {
//             cout << "Student found. Choose an option:\n";
//             cout << "1. Update Student\n";
//             cout << "2. Delete Student\n";
//             cout << "Enter your choice: ";
//             cin >> choice;

//             // إذا اختار المستخدم التحديث
//             if (choice == 1) {
//                 cout << "Enter new name: "; cin >> students[i].name;
//                 cout << "Enter new level: "; cin >> students[i].level;
//                 cout << "Enter new group: "; cin >> students[i].group;
//                 cout << "Enter new GPA: "; cin >> students[i].gpa;
//                 cout << "Student updated successfully!\n";
//             }
//             // إذا اختار المستخدم الحذف
//             else if (choice == 2) {
//                 students[i] = students[studentNum - 1];  // استبدال الطالب المحذوف بالطالب الأخير
//                 studentNum--;  // تقليص عدد الطلاب
//                 cout << "Student deleted successfully!\n";
//             }
//             return;
//         }
//     }
//     cout << "Student not found.\n";
// }

// int main() {
//     int choice;

//     students[studentNum++] = {"John", 4, 2, "A", 3.5};  // إضافة طالب للتجربة
//      students[studentNum++] = {"Alice", 2, 3, "B", 3.8}; // إضافة طالب للتجربة

//     while (true) {
//         cout << "==== Faculty Management System ====\n";
//         cout << "1. Update or Delete Student\n";
//         cout << "0. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;

//         if (choice == 1) {
//             updateOrDeleteStudent();
//         }
//         else if (choice == 0) {
//             cout << "Exiting program.\n";
//             return 0;
//         }
//         else {
//             cout << "Invalid choice. Try again.\n";
//         }
//     }
// }
// Responsible: Mazen
// void updateStudent() {
//     string id;
//     cout << "\n========== Update Student ==========\n"<<endl;
//     cout << "Enter student ID: "<<endl;
//     cin >> id;
//     for (int i = 0; i < studentNum; i++) {
//         if (students[i].id == id) {
//             cout << "Enter new name: "<<endl;
//             cin >> students[i].name;
//             cout << "Enter new level: "<<endl;
//             cin >> students[i].level;
//             cout << "Enter new group: "<<endl;
//             cin >> students[i].group;
//             cout << "Enter new GPA: "<<endl;
//             cin >> students[i].gpa;
//             cout << "Student updated.\n"<<endl;
//             cout << "====================================\n"<<endl;
//             return;
//         }
//     }
//     cout << "Student not found.\n";
//     cout << "====================================\n";
// }

// void deleteStudent() {
//     string id;
//     cout << "\n========== Delete Student ==========\n"<<endl;
//     cout << "Enter student ID to delete: "<<endl;
//     cin >> id;
//     for (int i = 0; i < studentCount; i++) {
//         if (students[i].id == id) {
//             students[i] = students[studentCount - 1];
//             studentCount--;
//             cout << "Student deleted.\n"<<endl;
//             cout << "====================================\n"<<endl;
//             return;
//         }
//     }
//     cout << "Student not found.\n"<<endl;
//     cout << "====================================\n"<<endl;
// }

// void updateStudent() {
//     int id;
//     cout << "Enter student ID  update ";
//     cin >> id;
//     for (int i = 0; i < studentNum; i++) {
//         if (students[i].id == id) {
//             cout << " New name ";
//              cin >> students[i].name;
//             cout << "New level ";
//              cin >> students[i].level;
//             cout << "New group ";
//              cin >> students[i].group;
//             cout << "New GPA ";
//              cin >> students[i].gpa;
//             cout << "Updated successfully!\n";
//             return;
//         }
//     }
//     cout << "Student not found.\n";
// }

// void deleteStudent() {
//     int id;
//     cout << "Enter student ID to delete ";
//     cin >> id;
//     for (int i = 0; i < studentNum; i++) {
//         if (students[i].id == id) {
//             students[i] = students[studentNum - 1];
//             studentNum--;
//             cout << "Student deleted.\n";
//             return;
//         }
//     }
//     cout << "Student not found.\n";
// // // }
// #include <iostream>
// #include <cctype>
// using namespace std;
// int main()
// {
//     string word;
//     string wordm;
//     cin >> word >> wordm;
//     for (int i = 0; i < wordm.length(); i++)
//     {

//         char wordmsmall = tolower(wordm[i]);
//         cout << wordmsmall << " --> " << int(wordmsmall) << endl;

//         cout << endl;
//     }
//     for (int j = 0; j < word.length(); j++)
//     {

//         char wordsmall = tolower(word[j]);

//         cout << wordsmall << " --> " << int(wordsmall) << endl;
//     }
//     if (tolower(word[0]) > tolower(wordm[0]))
//     {
//         cout << "1";
//     }
//     else if (tolower(word[0]) < tolower(wordm[0]))
//     {
//         cout << "-1";
//     }
//     else
//     {
//         cout << "0";
//     }
//    for (int i = 0; i < wordm.length(); i++) {
//     if(word.at(0)> wordm.length())
//     {
//         cout<<"1";
//     }
//    }
//    for (int j = 0; j < word.length(); j++) {
//       if(wordm.at(0)<word.length())
//       {
//         cout<<"-1";
//       }

//    }
//   if(a < b && b<c && c<d && d<e && e<f && f<g && g<h && h<i && i<j && j<k && k<l && l<m && m<n && n<o && o<p && p<q && q<r && r<s && s<t && t<v && v<w && w<x && x<y && y<z)
// }
//   {
//       cout<<"1";

//     }
//     else if(a > b && b>c && c>d && d>e && e>f && f>g && g>h && h>i && i>j && j>k && k>l && l>m && m>n && n>o && o>p && p>q && q>r && r>s && s>t && t>v && v>w && w>x && x>y && y>z)

//     {
//         cout<<"-1";

//     }
//     else
//     {
//         cout<<"0";

// int main()
// {
//     string word, wordm;
//     cin >> word >> wordm;

//     //
//     for (int i = 0; i < word.length(); i++)
//     {
//         word[i] = tolower(word[i]);
//         wordm[i] = tolower(wordm[i]);
//     }

//     //
//     if (word < wordm)
//         cout << "-1" << endl;
//     else if (word > wordm)
//         cout << "1" << endl;
//     else
//         cout << "0" << endl;

//     return 0;
// }

//   int main() {
//       string y;
//       cin >> y;
//       vector<int> numbers;

//       for (int j = 0; j < y.size(); j += 2) {
//               numbers.push_back(y[j] - '0');

//       }

//       sort(numbers.begin(), numbers.end());

//       for (int i = 0; i < numbers.size(); i++) {
//           cout << numbers[i];
//           if (i != numbers.size() - 1) {
//               cout << "+";
//           }
//       }

//       return 0;
//   }

// int main()
// {
//     string word;
//     cin>> word;
//     for(int i=0 ; i<word.length() ; i++)
//     {
//         if( isupper(word[0]))
//         {
//             cout<<word<<endl;
//             break;
//         }
//     }
//     for(int j=0 ; j<word.length() ; j++)
//     {
//         if(islower(word[0]))
//         {
//             char y=(toupper(word[0]));
//             cout<<y<<word.substr(1)<<endl;
//             break;
//         }
//     }

// }
//   #include <iostream>
//     #include <cctype>
//     #include <string>
// using namespace std;
// int main()
// {
//      int x;
//      cin>> x;
//      int counter=0;
//     char y[51];
//     for(int i = 0 ; i < x; i++)
//     {
//         cin>> y[i];
//     }
//     for(int i = 0 ; i < x - 1; i++)
//     {

//      if (y[i]==y[i+1])
//         {
//             counter++;
//         }

//     }
//     cout<<counter<<endl;
//     return 0;
// }
// # include<iostream>
// # include<cmath>
// using namespace std;
// int main()
// {

//     int k, n, w;
//     cin >> k >> n >> w;

//     int cost = k * w * (w + 1) / 2;
//     int result = cost - n;

//     if (result > 0)
//         cout << result << endl;
//     else
//         cout << 0 << endl;

//     return 0;
// }

// int main() {
//     string word;
//     cin >> word;

//     int uppercase_count = 0;
//     int lowercase_count = 0;

//     // نعد الأحرف باستخدام for loop العادي
//     for (int i = 0; i < word.length(); i++) {
//         if (isupper(word[i]))
//             uppercase_count++;
//         else
//             lowercase_count++;
//     }

//     // نقرر نغير حالة الأحرف حسب العدد
//     if (uppercase_count > lowercase_count) {
//         for (int i = 0; i < word.length(); i++) {
//             word[i] = toupper(word[i]);
//         }
//     } else {
//         for (int i = 0; i < word.length(); i++) {
//             word[i] = tolower(word[i]);
//         }
//     }

//     cout << word << endl;

//     return 0;
// }
// int main()
// {
//     int w;
//     cin>>w;
//     int point[3][3];
//     for(int i=0 ; i<w ; i++)
//     {
//         cin>>point[i][0]>>point[i][1]>>point[i][2];
//     }
//     int n=0; int z=0;int b=0;
//      for(int i=0 ; i<w ; i++)
//     {
//         n+=point[i][0];
//         z+=point[i][1];
//         b+=point[i][2];
//     }
//         if (n==0&&z==0&&b==0)
//         {
//             cout<<"YES"<<endl;

//         }
//         else
//         {
//             cout<<"NO"<<endl;

//    11110111011101     }

// }

// int main ()
// {
//     string s;
//     cin>>s;
//     int count=1;
//     for(int i=1; i<s.length() ; i++)
//     {
//         if(s[i]==s[i-1])
//         {

//             count++;

//         }
//         else
//         {
//             count=1;
//         }
//         if( count==7)
//         {
//             cout<<"YES"<<endl;
//             break;
//         }
//         else
//         {
//             cout<<"NO"<<endl;
//             break;

//         }

//   || x[i]!='1' || x[i]!='2' || x[i]!='3' || x[i]!='5' || x[i]!='6' || x[i]!='8'||x[i]!='9'  }
// }

// int main()
// {
//     int m;
//     cin>>m;
//     char letter;
//     int anton=0;
//     int danik=0;
//     for (int i = 0; i < m; i++)
//     {
//         cin>>letter;
//         if (letter== 'A')
//         {
//             anton++;
//         }
//         else if (letter=='D')
//         {
//            danik ++;
//         }

//     }
//      if (anton > danik)
//     {
//         cout<<"Anton"<<endl;
//     }
//     else if (anton < danik)
//  {
//         cout<<"Danik"<<endl;

//  }
//     else if (anton == danik)
//  {
//    cout<<"Friendship"<<endl;
//  }

//

// for(int j = y[j-1] ; j<y.length() ; j--)

// int main()
// {
//     string x, y;
//     cin >> x >> y;

//     for (int i = 0; i < x.length(); i++)
//     {
//         if (x[i] != y[y.length() - 1 - i])
//         {
//             cout << "NO" << endl;
//             return 0;
//         }
//     }

//     cout << "YES" << endl;
//     return 0;
// int main()
// {
//     int h, n;
//     cin >> h;
//     cin >> n;
//     int a[n];
//     int width = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//         if (a[i] <= h)
//         {
//             width++;
//         }
//         else if (a[i] > h)
//         {
//             width += 2;
//         }
//     }
//     cout << width;
// }

//  int main()
//  {
//     int n;
//     cin>>n;
//     int a,b;
//     int count=0;
//     int maxcount=0;
//     for(int i = 0 ; i<n ; i++)
//     {
//         cin>>a>>b;
//         count-=a;
//         count+=b;
//         if(count > maxcount)
//         {
//               maxcount=count;
//         }

//     }
//     cout<<maxcount<<endl;
//  }
// int main()
// {
//   int y;
//   cin >> y;
//   while (true)
//   {
//     y++;
//     string s = to_string(y);
//     set<char> nums(s.begin(), s.end());

//     if (nums.size() == s.size())
//     {

//       cout << y << endl;
//       break;
//     }
//   }
// }
// int main()
// {
//   int n;
//   cin >> n;
//   int a[n];
//   for (int i = 0; i < n; i++)
//   {

//     cin >> a[i];
//   }
//     for(int i = 0; i < n; i++)
//   {
//     if (a[i] == 1)
//     {

//       cout << "HARD" << endl;
//       break;
//     }
//     else
//     {

//       cout << "easy" << endl;
//       break;
//     }

//   }
// }
//  {
//     int n;
//     cin>> n;
//     float t;
//     cin>> t;
//     int count= 0;
//     string word ;
//     for(int i = 0 ; i<n ; i++)
//     {
//         cin>> word;

//     }
//     for (int i = 0; i < word.length(); i++)
//     {
//        if ()
//        {
//         count t+1;
//        }

//     }

//  #include <string>
//  #include <set>
//  int main()
//  {
//     int n;
//     cin>>n;
//     int k;
//     cin>>k;
//     int score;
//     cin>>score;
//     int counter=0;
//     for(int i =0 ; i<n ; i++)
//     {

//         if (score[i]>=k && score[i]>0)
//          {
//           counter++;
//          }
//     }
//     cout<<counter<<endl;

//  }
// struct node
// {
//   int data;
//   node* next;
// };

// node* head = NULL;

// int main(){

//   return 0;

// class Rectangle {
// public:
//     double length;
//     double width;

//     double getArea() {
//         return length * width;
//     }
// };

// int main() {
//     Rectangle resultArea;

//     cout << "Enter length: ";
//     cin >> resultArea.length;

//     cout << "Enter width: ";
//     cin >> resultArea.width;

//     cout << "Area = " << resultArea.getArea() << endl;

//     return 0;
// }

// int main()
// {
//     int n;
//     cin >> n;

//     int luckyNumbers[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477,
//                           744, 747, 774, 777};

//     for (int i = 0; i < 14; i++)
//     {
//         if (n % luckyNumbers[i] == 0)
//         {
//             cout << "YES" << endl;
//             return 0;
//         }
//     }

//     cout << "NO" << endl;
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string n;
//     cin >> n;

//     int luckynumbers[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477,
//                           744, 747, 774, 777};
//     for (int i = 0; i < n.length(); i++)
//     {
//         if (n[i] != '7' && n[i] != '4')
//         {
//             cout << "NO" << endl;
//             return 0;
//         }
//     }
//     for (int i = 0; i < 14; i++)
//     {
//         if (n % luckynumbers[i] == 0)
//         {
//             cout << "YES" << endl;
//         }
//     }

//     cout << "YES" << endl;
//     return 0;
// }

// class Search {
// public:
//     int binary(int data[], int size, int target) {
//         int left = 0;
//         int right = size - 1;

//         while (left <= right) {
//             int mid = (left + right) / 2;

//             if (data[mid] == target)
//                 return mid;
//             else if (data[mid] < target)
//                 left = mid + 1;
//             else
//                 right = mid - 1;
//         }

//         return -1;
//     }
// };

// int main() {
//     int num[] = {1, 3, 5, 7, 9};
//     int size = sizeof(num) / sizeof(num[0]);

//     Search s;
//     int result = s.binary(num, size, 7);

//     if (result != -1)
//         cout << "Element found at index: " << result << endl;
//     else
//         cout << "Element not found." << endl;

//     return 0;
// }

// يعني المفرض اخليه ماشي كده صح
//  ده الفهرس للعنصر [0]-->[1]اما ده المفروض يكون نتيجه العكس اللي تطلع انا كاتب الفهرس الخاص بيها
//  ده الفهرس للعنصر [1]-->[2]اما ده المفروض يكون نتيجه العكس اللي تطلع انا كاتب الفهرس الخاص بيها
//  ده الفهرس للعنصر [2]-->[3]اما ده المفروض يكون نتيجه العكس اللي تطلع انا كاتب الفهرس الخاص بيها
//  ده الفهرس للعنصر [3]-->[0]اما ده المفروض يكون نتيجه العكس اللي تطلع انا كاتب الفهرس الخاص بيها


// int main()
// {
    //     int n;
    //     cin >> n;
    //     int array[100];
    //     int o[100];
    //     for (int i = 0; i < n; i++)
    //     {
        //         cin >> array[i];
        //     }
        //     for (int j = 0; j < n; j++)
        //     {
            //         o[array[j] - 1] = j + 1;
            
            //     }
            //         for (int i = 0; i < n; i++)
            //         {
                
//             cout << o[i] << " ";
//         }

//         cout << endl;
// }

// 
#include <iostream>
using namespace std;

void the_value(int n)
{
    if (n < 10) {
        cout << n << " ";
        return;
    }

    the_value(n / 10);
    cout << n % 10 << " ";
}

int main()
{
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        the_value(N);
        cout << endl;
    }

    return 0;
}
