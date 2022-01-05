string encode(string src)
{     
  char ch = src[0];
  int cnt = 1;
  string encoded;
  for(int i = 1;i < src.length();i++)
  {
      if(src[i]!=ch)
      {
          encoded+=ch;
          encoded+=('0'+cnt);
          cnt = 1;
          ch = src[i];
      }else{
          cnt++;
      }
  }
    encoded+=ch;
    encoded+=('0'+cnt);
  return encoded;
}    
