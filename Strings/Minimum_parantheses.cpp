int minimumParentheses(string pattern) {
  // Write your code here.
  // pattern is the given string.
  int n = pattern.length(), op = 0, cp = 0, res = 0;
  for (int i = 0; i < n; i++) {
    if (pattern[i] == '(')
      op++;
    else {
      if (op == 0)
        cp++;
      else
        op--;
    }
  }
  res += cp + op;
  return res;
}