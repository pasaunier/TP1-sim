#include "Simhead.h"

const int INF = 9999999999;

T_piece::T_piece()
{

}

//T_machine::T_machine

void simuler(int duree, int duree_IA, int duree_t, T_system& system, System::Windows::Forms::RichTextBox^ zone)
{
	zone->Text = "Début simulation";
	system.mach.state = 0;
	system.mach.contenu = -1;
	system.mach.next_event = INF;

	system.ent.d_inter_in = duree_IA;
	system.ent.d_ttt = duree_t;
	system.ent.num_last_p_in = -1;
	system.ent.d_next_event = INF;
	system.ent.nbr_piece_perdues = 0;

	system.sor.num_last_p_out = -1;
	system.sor.nbr_total_out = 0;
	system.sor.duree_mean_inter_out = 0;

	float date_sim = 0;
	//while date_sim <=

}
