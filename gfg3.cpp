  char firstRep (string s)
    {
        string ans="";
          for(int i=0; i<s.length(); i++){
            for(int j = i+1; j<s.length(); j++){
                if(s[i]==s[j]){
                    return s[i];
                    break;
                }
            }
        }
        return '#';
            }
