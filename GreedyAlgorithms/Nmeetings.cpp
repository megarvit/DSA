#include<bits/stdc++.h>
using namespace std;

int maxMeetings(vector<int>& start, vector<int>& end) {
    // Your code here
    vector<pair<int,int>> meetings;
    int n = start.size();
    
    //first we are taking end time to sort it later
    for(int i=0; i<n; i++){
        meetings.push_back({end[i],start[i]});
    }
    
    //sort based on end time
    sort(meetings.begin(),meetings.end());
    
    int cnt = 0;
    //for tracking the end time of the last meeting
    int lastEndTime = -1;
    
    for(auto meeting : meetings){
        if(meeting.second > lastEndTime){
            //i.e., if start time(meeting.second) > last meeting end time
            cnt++;
            lastEndTime = meeting.first; //last end time updated
        }
    }
    return cnt;
}

int main(){
    int t;
    cin>>t;
    cin.ignore();

    while(t--){
        string input;
        int num;

        vector<int> start;
        getline(cin, input);
        stringstream s2(input);
        while(s2 >> num){
            start.push_back(num);
        }

        vector<int> end;
        getline(cin, input);
        stringstream s22(input);
        while(s22 >> num){
            end.push_back(num);
        }

        int ans = maxMeetings(start,end);
        cout<<ans<<endl;
        cout<<"~"<<endl;
        
    }
    return 0;
}
    