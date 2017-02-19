stack<int> stack_list;
stack<int> max_list;

cin >> n;

for( auto i = 0; i < n;i++ )
{
    cin >> query_type;
    switch(query_type)
    {
        case 1: //insert element to stack
            cin >> insert_element;
            if(stack_list.empty())
            {
                stack_list.push(insert_element); // add element to the stack
                max_list.push(insert_element); // since the stack is empty, this is a max value and is pushed to the max stack as well
            }
            else{
                if(insert_element > max_list.top()) // the stack is not empty, then if this element is larger then last max val -> insert it to the max val stack
                {
                    max_list.push(insert_element);
                }else // otherwise, copy the old max element value AGAIN into the top of the max val stack 
                {
                    max_list.push(max_list.top());
                }
                stack_list.push(insert_element); // don’t forget the add the element to the stack_list 
            }
            break; // DONT FORGET TO BREAK IN A SWITCH STATMENT!
        case 2: // delete values: 
            if(!stack_list.empty()) // if stack is not empty
            {
                stack_list.pop(); // pop the values from both
                max_list.pop(); 
            }

            break;
        case 3: // print the maximum value:
            cout << max_list.top() << “\n”; // notice .top() not .pop() ! we just want to view it
        default:
            break;
    }
}
