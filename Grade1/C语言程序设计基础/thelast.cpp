NODE *inststr(NODE *heada,NODE *headb,int m)
	//���룺��������ͷָ�룬heada����λ�ã����أ�heada 
{
	int i;
	NODE *p=heada, *q=NULL;
	if(m>0)
	{
		for(i=1; i<m && p->next != NULL; i++) //����heada����m-1���ڵ� 
			p=p->next;
		q=p->next; // Ϊ�˷���������ָ��ָ��������֤����ṹ����������p��*next
		p->next=headb; // ��m-1���ڵ��*nextָ��headb��ʵ���ν� 
		while(p->next != NULL) //������headbβ�� 
			p=p->next;
		if(q != NULL) //�������ж�ԭ�����m-1���ڵ��Ƿ�Ϊ�գ���ʵ���ж�Ҳ���� 
			p->next=q; //�����Ϊ�գ���ô������β����Ӧ��ָ��ԭ��m-1��*next����֤����ṹ���� 
		else  //���mС�ڵ���0����ô�������⣬ֱ�Ӱ����������ͷ�� 
		{
			p=headb;
			while(p->next != NULL) //ͬ����������β��Ҫָ��heada 
				p=p->next;
			p->next=heada;
			heada=headb; //��֤headaһ��������ͷ�� 
		}
		return heada; //������һ������ֵ 
	}
}


