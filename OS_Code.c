#include<stdio.h> 
	 
	int main() 
	{ 
	int k, lmt, total = 0, x, counter = 0, time_quantum,j;
	    
	int wait_time = 0, turnaround_time = 0,pos,g,p[10],prio[10], a_time[10], b_time[10], temp[10],b; 
	      
		  float average_wait_time, average_turnaround_time;
	      
		  printf("\nEnter Total Number of Processes:"); 
	      
		  scanf("%d", &lmt); 
	      
		  x = lmt; 
	      for(k = 0; k < lmt; k++) 
	      {
		    p[k]=k+1;
		   
		    prio[k]=0;
	            printf("\nEnter total Details of Process[%d]\n", k + 1);
	            printf("Arrival Time:\t");
	            scanf("%d", &a_time[k]);
	            printf("Burst Time:\t");
	            scanf("%d", &b_time[k]); 
	            temp[k] = b_time[k];
	      }
		   
	      printf("\nEnter the Time Quantum:"); 
	      scanf("%d", &time_quantum); 
	      printf("\nProcess ID\t\tBurst Time\t Turnaround Time\t Waiting Time\t Priority\n");
	      for(total = 0, k = 0; x != 0;) 
	      { 
	

			    for(g=0;g<limit;g++)
			    {
				int temp1;
				pos=g;
				for(j=g+1;j<lmt;j++)
				{
				    if(prio[j]<prio[pos])
					pos=j;
				}
			 
			temp1=prio[g];
		
			prio[g]=prio[pos];
		
			prio[pos]=temp1;
			 
				temp1=b_time[z];
				b_time[g]=b_time[pos];
				b_time[pos]=temp1;
			 			temp1=a_time[g];
					a_time[g]=a_time[pos];
				a_time[pos]=temp1;
	

				temp1=p[g];
					p[g]=p[pos];
				p[pos]=temp1;
	

				temp1=temp[g];
					temp[g]=temp[pos];
				temp[pos]=temp1;
			    }
			{
			}
	            
				if(temp[k] <= time_quantum && temp[k] > 0) 
	            { 
	                  total = total + temp[k]; 
	                  temp[k] = 0; 
	                  counter = 1; 
	            } 
	            
				else if(temp[k] > 0) 
	            { 
	                  temp[k] = temp[k] - time_quantum; 
	                  total = total + time_quantum; 
	            } 
	

		for(b=0;b<lmt;b++)
			{
				if(b==i)
				prio[b]+=1;
				else
				prio[b]+=2;
			}
	

	            if(temp[i] == 0 && counter == 1) 
	            { 
	                  x--; 
	                  printf("\nProcess[%d]\t\t%d\t\t %d\t\t %d\t\t%d", p[k], b_time[k], total - a_time[k], total - a_time[k] - b_time[k],prio[k]);
	                  wait_time = wait_time + total - a_time[k] - b_time[k]; 
	                  turnaround_time = turnaround_time + total - a_time[k]; 
	                  counter = 0; 
	            } 
	            if(k == lmt - 1) 
	            {
	                  k = 0; 
	            
				}
	            else if(a_time[k + 1] <= total) 
	            {
	                  k++;
	            
				}
	            else 
	            {
	                  k = 0;
	            
				}		
	      } 
	      return 0; 
	}
