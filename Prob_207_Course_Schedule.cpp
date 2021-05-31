#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
 	unordered_map<int,vector<int> > graph;
 	int course1,course2;
 	vector<int> indegree(numCourses,0);
 	for (int i = 0; i < prerequisites.size(); i++){
 		course1 = prerequisites[i][0];
 		course2 = prerequisites[i][1];   	
 		graph[course2] = course1;
 		indegree[course1]++;
 	}
 	queue<int> q;
 	for (int i = 0; i < numCourses; i++){
 		if(indegree[i]==0){
 			q.push(i);
 		}
 	}
 	int finished == 0;
 	while(!q.empty()){
 		int top = q.front();
 		q.pop();
 		finished++;
 		vector<int> children;
 		for (int i= 0; i < children.size(); ++i){
 			indegree[children[i]]--;
 			if(indegree[children] == 0){
 				q.push(children[i]);
 			}
 		}
 	}

 	return finished == numCourses;

}

int main(){

	int numCourses = 2;

	vector<int> v1;
	v1.push_back(1);
	v1.push_back(0);
	vector<int> v2;
	v2.push_back(1);
	v2.push_back(2);

	vector<vector<int> > v;
	v.push_back(v1);
	v.push_back(v2);
	cout<<canFinish(numCourses,v);
    return 0;
}