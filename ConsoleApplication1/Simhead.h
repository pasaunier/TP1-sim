#ifndef SIM_HEAD
#define SIM_HEAD
//#include <sstream>
//#include <string>

//using namespace System::Windows::Forms;

struct T_piece
{
	int nbr;
	int duree_ttt;
	float d_queue_out;
	float d_machine_in;
	float d_machine_out;
	float d_sys_in;
	float d_sys_out;
	T_piece();
};

struct T_machine
{
	int state;
	int contenu;
	int next_event;
	//T_machine
};

struct T_entree
{
	float d_inter_in;
	float d_ttt;
	int num_last_p_in;
	int d_next_event;
	int nbr_piece_perdues;

	//T_entree();
};

struct T_sortie
{
	int num_last_p_out;
	int nbr_total_out;
	float duree_mean_inter_out;
};

struct T_system
{
	int duree_sim;
	T_machine mach;
	T_entree ent;
	T_sortie sor;
};

// donné par le prof
//void simuler(int duree, int duree_IA, int duree_t, T_system& system, System::Windows::Forms::RichTextBox^ zone);

void simuler(int duree, int duree_IA, int duree_t, T_system& system, System::Windows::Forms::RichTextBox^ zone);


#endif // !SIM_HEAD