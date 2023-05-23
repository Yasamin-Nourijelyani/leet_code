// go through list, make the first element the head. Then, create nodes based on if they are bigger than the first element by traversing the tree each time o(nlgn)
// elements less than will be node.left, and greater than will be node.right
// if I meet the value equal to an item in the list, return true
// if I traverse the entire list, return false

class Solution {
    //node subclass
    private class Node {
        int value;
        Node left_node = null;
        Node right_node = null;

        // add a left node

        public void add_new_node (Node new_node){
            if (new_node.value == this.vlaue){
                return true;
            }
            else if (new_node.value < this.value){
                if (new_node.left_node != null){
                    this.left_node.add_new_node(new_node);
                } else{
                    this.left_node = new_node;
                }

            }else{// newnode value > this value
                if (new_node.right_node != null){
                    this.right_node.add_new_node(new_node);
                } else{
                    this.right_node = new_node;
                }
            }
        }
    }

    private boolean createTree(Node head, int[] nums){
        for (int item : nums){
            if (item == head.value){
                return true;
            } else {
                Node new_node = new Node;
                new_node.value = item;
                head.add_new_node(new_node);

            }

        }
        return false;
    }

    public boolean containsDuplicate(int[] nums) {

        if (nums.length > 0){
            Node root_new = new Node();
            node_new.value = node_value;
            boolean withDupe = createTree(root_new, nums);
        }
        



        }


        
    


    public static void main(String[] args){
        Solution myDup = new Solution();
        int[] values = {1, 2, 3, 1, 5}
        System.out.println(myDup.containsDuplicate(values));
    }
}