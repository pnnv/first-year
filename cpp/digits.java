package cpp;
import java.util.ArrayList;


public class digits {
    public static void main(String[] args) {
        int x = 12343;
        int temp = x;
        ArrayList<Integer> tempv = new ArrayList<>();
        while(temp != 0) {
            tempv.add(temp%10);
            temp /= 10;
        }

        System.out.println(tempv);

        ArrayList<Character> charVec = new ArrayList<>();
        for(int i = tempv.size() - 1; i >= 0; i--) {
            int tmp = tempv.get(i) + 48;
            charVec.add((char)tmp);
        }

        System.out.println(charVec);

        String str = new String("");
        for(int i = 0; i < charVec.size(); i++) {
            str += charVec.get(i);
        }
        
        System.out.println(str);
    }
}
