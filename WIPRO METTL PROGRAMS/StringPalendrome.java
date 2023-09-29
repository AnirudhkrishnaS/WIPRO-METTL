public class StringPalendrome {

    public int isPalendrome(String input1){


    String str = input1, reverseStr = "";
    int strlen = str.length();

    for(int i = (strlen -1) ;i>=0 ; --i){
        reverseStr = reverseStr + str.charAt(i);
    }
    if(str.toLowerCase().equals(reverseStr.toLowerCase())){
        return 2;

    }
    else{
        return 1;
    }

    // throw new UnsupportedOperationException("isPalindrome(String input1)");


}
}
    

