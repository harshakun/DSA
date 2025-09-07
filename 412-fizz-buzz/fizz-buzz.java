class Solution {
    public List<String> fizzBuzz(int n) {
        List<String> arr= new ArrayList<>();
        for(int id =1;id<=n;id++)
        {
            
            if(id%3==0 && id%5 ==0) arr.add("FizzBuzz");
            else if(id %3==0) arr.add("Fizz");
            else if(id%5==0) arr.add("Buzz");
            else arr.add(Integer.toString(id));

        } 
        return arr;
    }
}