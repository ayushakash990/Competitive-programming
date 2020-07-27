import sys
from collections import defaultdict
 
node_value_dict = defaultdict(int)
connected_graph_component = defaultdict(list)
 
 
def connect_graph():
    n, m, k = list(map(int, sys.stdin.readline().split()))
    node_values = list(map(int, sys.stdin.readline().split()))
    for i in range(1, len(node_values) + 1):
        node_value_dict[i] = node_values[i - 1]
 
    for m_i in range(m):
        n1, n2 = list(map(int, input().split()))
        connected_graph_component[n1].append(n2)
        connected_graph_component[n2].append(n1)
 
    for i in range(1, n + 1):
        if i in connected_graph_component:
            curr_co = connected_graph_component[i]
            sort_list = sorted(curr_co, key=lambda value: node_value_dict[
                               value], reverse=True)
            for i in range(len(sort_list) - 1):
                if node_value_dict[sort_list[i]] == node_value_dict[sort_list[i + 1]] and sort_list[i] < sort_list[i + 1]:
                    sort_list[i], sort_list[
                        i + 1] = sort_list[i + 1], sort_list[i]
 
            print(sort_list[k - 1])
        else:
            print(-1)
 
connect_graph()