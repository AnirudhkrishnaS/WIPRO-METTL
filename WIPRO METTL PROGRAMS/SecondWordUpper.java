public class SecondWordUpper {
    public static void main(String[] args) {
        
    }

}

class sample{
    public String secondWordUppercase(String input1){
        String []arr= input1.split(" ");
        if(arr.length == 1){
            return "LESS";
        }else{
            return arr[1].toUpperCase();
        }

		// throw new UnsupportedOperationException("secondWordUpperCase(String input1)");
	}
}

    


