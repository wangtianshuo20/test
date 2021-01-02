#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
void Initcontact(struct Con* ps) {
	memset(ps->data, 0, sizeof(ps->data));//��1000����Ա����Ϣ��ʼ��Ϊ0
	ps->size = 0;
}
void Printcontact(const struct Con* ps) {
	printf("%-20s\t%-20s\t%-10s\t%-20s\t%-20s\n", "����", "�Ա�", "����", "�绰", "סַ");//�ȴ�ӡ���⣬\t����ʶ��һ��tab�ո�-20s�����СΪ20��������룬ע���ӡ���溺�ֵ�ʱ��Ҫ��˫����
	int i = 0;
	for (i = 0; i < ps->size; i++) {
		printf("%-20s\t%-20s\t%-10d\t%-20s\t%-20s\n",
			ps->data[i].name,//ps�ǽṹ��ָ�룬֮������ָ���������������飬i�ڼ�����Ա��֮���ҵ���people�ṹ�壬֮���ٷ�������ĳ�Ա
			ps->data[i].sex,
			ps->data[i].age,
			ps->data[i].tel,
			ps->data[i].src
		);
	}
	
}
void Addcontact(struct Con* ps){//��Ϊsize����ʼ��Ϊ0�������������ѵ�ʱ��ʹӵ�һ����ʼ��ֵ�Ϳ����ˣ�ÿ�θ�ֵһ����֮��size++
	if (ps->size == MAX) {//���ж�ͨѶ¼��û��
		printf("ͨѶ¼�Ѿ�����\n");
	}
	printf("������������\n");
	scanf("%s", ps->data[ps->size].name);
	printf("�������Ա�\n"); 
	scanf("%s", ps->data[ps->size].sex);
	printf("����������:\n");
	scanf("%d", &(ps->data[ps->size].age));
	printf("������绰:\n");
	scanf("%s", ps->data[ps->size].tel);
	printf("�������ַ��\n");
	scanf("%s", ps->data[ps->size].src);
	ps->size++;
	printf("��ӳɹ���\n");
}
int Findname(struct Con* ps, char *name) {
	int i = 0;
	for (i = 0; i < ps->size; i++) {
		if (0 == strcmp(ps->data[i].name, name)) {//��strcmp���Ƚ������ַ����Ƿ���ȣ����Ķ����ַ���������Ҳ������Ԫ�ص�ַ
			return i;//���ҵ��������±�λ�÷��س�ȥ
		}
		
	}
	return -1;
}
void Delcontact(struct Con* ps) {
		char name[name_max];//����һ���ַ����������Ҫ���������
		printf("��������Ҫɾ�����˵�������\n");
		scanf("%s", name);//name��������������������������Ԫ�ص�ַ
						  //���Ⱦ�Ҫ�ж�Ҫɾ����������Ƿ����
		int ret = Findname(ps, name);
		if (ret == -1) {
			printf("��Ҫɾ�����˲�����\n");
		}
		else {
			int j = 0;
			for (j = ret; j < ps->size - 1; j++) {//�ӷ��ص��±�i��ʼ����Ҫɾ�����˵����ݸ��ǵ�
				ps->data[j] = ps->data[j + 1];
			}
			ps->size--;
			printf("ɾ���ɹ���\n");
		}
		
	}
void Searchcontact(const struct Con* ps) {
	char name[name_max];
	printf("��������Ҫ���ҵ��˵�������\n");
	scanf("%s", name);
	int ret = Findname(ps, name);
	if (ret == -1) {
		printf("��Ҫ���ҵ��˲�����\n");
	}
	else {//ֱ�ӰѲ��ҵ����˵���Ϣ��ӡ�����Ϳ�����
		printf("%-20s\t%-20s\t%-10s\t%-20s\t%-20s\n", "����", "�Ա�", "����", "�绰", "סַ");
		printf("%-20s\t%-20s\t%-10d\t%-20s\t%-20s\n",
				ps->data[ret].name,
				ps->data[ret].sex,
				ps->data[ret].age,
				ps->data[ret].tel,
				ps->data[ret].src
			);
	}

}
void Modcontact(struct Con* ps) {
	char name[name_max];
	printf("��������Ҫ�޸ĵ��˵�������\n");
	scanf("%s", name);
	int ret = Findname(ps, name);
	if (ret == -1) {
		printf("��Ҫ�޸ĵ��˲�����\n");
	}
	else {
		printf("������������\n");
		scanf("%s", ps->data[ret].name);
		printf("�������Ա�\n");
		scanf("%s", ps->data[ret].sex);
		printf("����������:\n");
		scanf("%d",&( ps->data[ret].age));
		printf("������绰:\n");
		scanf("%s", ps->data[ret].tel);
		printf("�������ַ��\n");
		scanf("%s", ps->data[ret].src);
		printf("�޸ĳɹ���\n");
	}
	
}