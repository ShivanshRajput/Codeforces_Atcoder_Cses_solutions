vector<pair<long long, char>> cuts;
        for (long long i = 0; i < horizontalCut.size(); ++i) {
            cuts.push_back({horizontalCut[i], 'h'});
        }
        for (long long j = 0; j < verticalCut.size(); ++j) {
            cuts.push_back({verticalCut[j], 'v'});
        }
        
        sort(cuts.begin(),cuts.end(),greater<pair<long long,char>>());
        long long vPiece = 1;
        long long hPiece = 1;
        long long ans = 0;
        for(auto &it: cuts){
            long long cost = it.first;
            char type = it.second;
            if(type == 'h'){
                ans += cost*vPiece;
                hPiece ++;
            }
            else{
                ans += cost*hPiece;
                vPiece ++;
            }
        }
        return ans;