//
// XAirSetScene.h
//
// Created on: Oct 13, 2014 (X32SetScene.h)
//      Author: Patrick-Gilles Maillot
//
// Modification to add snippet support: Feb 24, 2015
//
// Modified to Support XAir Series on: Jul 10, 2016
//      Author: Ken Mitchell
//
// Definitions of data, structures and constants used in parsing scene (and snippet) files
//

#ifndef X32SETSCENE_H_
#define X32SETSCENE_H_

// Definitions
// Known Scene commands.
// !!!! When updating or adding a command in the Xsc[] array below, make sure you also
// !!!! double check or update the enum Xsc_typ following the array of strings
//
char*	Xsc[] = {
//		"#2.1#",
		"/config/chlink",	//	0
		"/config/buslink",
		"/config/linkcfg",
		"/config/solo",
		"/config/amixenable",
		"/config/amixlock",
		"/config/mute",
		"/ch/01/config",
		"/ch/01/preamp",
		"/ch/01/gate",
		"/ch/01/gate/filter",
		"/ch/01/dyn",
		"/ch/01/dyn/filter",
		"/ch/01/insert",
		"/ch/01/eq",
		"/ch/01/eq/1",
		"/ch/01/eq/2",
		"/ch/01/eq/3",
		"/ch/01/eq/4",
		"/ch/01/mix",
		"/ch/01/mix/01",
		"/ch/01/mix/02",
		"/ch/01/mix/03",
		"/ch/01/mix/04",
		"/ch/01/mix/05",
		"/ch/01/mix/06",
		"/ch/01/mix/07",
		"/ch/01/mix/08",
		"/ch/01/mix/09",
		"/ch/01/mix/10",
		"/ch/01/grp",
		"/ch/01/automix",
		"/ch/02/config",
		"/ch/02/preamp",
		"/ch/02/gate",
		"/ch/02/gate/filter",
		"/ch/02/dyn",
		"/ch/02/dyn/filter",
		"/ch/02/insert",
		"/ch/02/eq",
		"/ch/02/eq/1",
		"/ch/02/eq/2",
		"/ch/02/eq/3",
		"/ch/02/eq/4",
		"/ch/02/mix",
		"/ch/02/mix/01",
		"/ch/02/mix/02",
		"/ch/02/mix/03",
		"/ch/02/mix/04",
		"/ch/02/mix/05",
		"/ch/02/mix/06",
		"/ch/02/mix/07",
		"/ch/02/mix/08",
		"/ch/02/mix/09",
		"/ch/02/mix/10",
		"/ch/02/grp",
		"/ch/02/automix",
		"/ch/03/config",
		"/ch/03/preamp",
		"/ch/03/gate",
		"/ch/03/gate/filter",
		"/ch/03/dyn",
		"/ch/03/dyn/filter",
		"/ch/03/insert",
		"/ch/03/eq",
		"/ch/03/eq/1",
		"/ch/03/eq/2",
		"/ch/03/eq/3",
		"/ch/03/eq/4",
		"/ch/03/mix",
		"/ch/03/mix/01",
		"/ch/03/mix/02",
		"/ch/03/mix/03",
		"/ch/03/mix/04",
		"/ch/03/mix/05",
		"/ch/03/mix/06",
		"/ch/03/mix/07",
		"/ch/03/mix/08",
		"/ch/03/mix/09",
		"/ch/03/mix/10",
		"/ch/03/grp",
		"/ch/03/automix",
		"/ch/04/config",
		"/ch/04/preamp",
		"/ch/04/gate",
		"/ch/04/gate/filter",
		"/ch/04/dyn",
		"/ch/04/dyn/filter",
		"/ch/04/insert",
		"/ch/04/eq",
		"/ch/04/eq/1",
		"/ch/04/eq/2",
		"/ch/04/eq/3",
		"/ch/04/eq/4",
		"/ch/04/mix",
		"/ch/04/mix/01",
		"/ch/04/mix/02",
		"/ch/04/mix/03",
		"/ch/04/mix/04",
		"/ch/04/mix/05",
		"/ch/04/mix/06",
		"/ch/04/mix/07",
		"/ch/04/mix/08",
		"/ch/04/mix/09",
		"/ch/04/mix/10",
		"/ch/04/grp",
		"/ch/04/automix",
		"/ch/05/config",
		"/ch/05/preamp",
		"/ch/05/gate",
		"/ch/05/gate/filter",
		"/ch/05/dyn",
		"/ch/05/dyn/filter",
		"/ch/05/insert",
		"/ch/05/eq",
		"/ch/05/eq/1",
		"/ch/05/eq/2",
		"/ch/05/eq/3",
		"/ch/05/eq/4",
		"/ch/05/mix",
		"/ch/05/mix/01",
		"/ch/05/mix/02",
		"/ch/05/mix/03",
		"/ch/05/mix/04",
		"/ch/05/mix/05",
		"/ch/05/mix/06",
		"/ch/05/mix/07",
		"/ch/05/mix/08",
		"/ch/05/mix/09",
		"/ch/05/mix/10",
		"/ch/05/grp",
		"/ch/05/automix",
		"/ch/06/config",
		"/ch/06/preamp",
		"/ch/06/gate",
		"/ch/06/gate/filter",
		"/ch/06/dyn",
		"/ch/06/dyn/filter",
		"/ch/06/insert",
		"/ch/06/eq",
		"/ch/06/eq/1",
		"/ch/06/eq/2",
		"/ch/06/eq/3",
		"/ch/06/eq/4",
		"/ch/06/mix",
		"/ch/06/mix/01",
		"/ch/06/mix/02",
		"/ch/06/mix/03",
		"/ch/06/mix/04",
		"/ch/06/mix/05",
		"/ch/06/mix/06",
		"/ch/06/mix/07",
		"/ch/06/mix/08",
		"/ch/06/mix/09",
		"/ch/06/mix/10",
		"/ch/06/grp",
		"/ch/06/automix",
		"/ch/07/config",
		"/ch/07/preamp",
		"/ch/07/gate",
		"/ch/07/gate/filter",
		"/ch/07/dyn",
		"/ch/07/dyn/filter",
		"/ch/07/insert",
		"/ch/07/eq",
		"/ch/07/eq/1",
		"/ch/07/eq/2",
		"/ch/07/eq/3",
		"/ch/07/eq/4",
		"/ch/07/mix",
		"/ch/07/mix/01",
		"/ch/07/mix/02",
		"/ch/07/mix/03",
		"/ch/07/mix/04",
		"/ch/07/mix/05",
		"/ch/07/mix/06",
		"/ch/07/mix/07",
		"/ch/07/mix/08",
		"/ch/07/mix/09",
		"/ch/07/mix/10",
		"/ch/07/grp",
		"/ch/07/automix",
		"/ch/08/config",
		"/ch/08/preamp",
		"/ch/08/gate",
		"/ch/08/gate/filter",
		"/ch/08/dyn",
		"/ch/08/dyn/filter",
		"/ch/08/insert",
		"/ch/08/eq",
		"/ch/08/eq/1",
		"/ch/08/eq/2",
		"/ch/08/eq/3",
		"/ch/08/eq/4",
		"/ch/08/mix",
		"/ch/08/mix/01",
		"/ch/08/mix/02",
		"/ch/08/mix/03",
		"/ch/08/mix/04",
		"/ch/08/mix/05",
		"/ch/08/mix/06",
		"/ch/08/mix/07",
		"/ch/08/mix/08",
		"/ch/08/mix/09",
		"/ch/08/mix/10",
		"/ch/08/grp",
		"/ch/08/automix",
		"/ch/09/config",
		"/ch/09/preamp",
		"/ch/09/gate",
		"/ch/09/gate/filter",
		"/ch/09/dyn",
		"/ch/09/dyn/filter",
		"/ch/09/insert",
		"/ch/09/eq",
		"/ch/09/eq/1",
		"/ch/09/eq/2",
		"/ch/09/eq/3",
		"/ch/09/eq/4",
		"/ch/09/mix",
		"/ch/09/mix/01",
		"/ch/09/mix/02",
		"/ch/09/mix/03",
		"/ch/09/mix/04",
		"/ch/09/mix/05",
		"/ch/09/mix/06",
		"/ch/09/mix/07",
		"/ch/09/mix/08",
		"/ch/09/mix/09",
		"/ch/09/mix/10",
		"/ch/09/grp",
		"/ch/09/automix",
		"/ch/10/config",
		"/ch/10/preamp",
		"/ch/10/gate",
		"/ch/10/gate/filter",
		"/ch/10/dyn",
		"/ch/10/dyn/filter",
		"/ch/10/insert",
		"/ch/10/eq",
		"/ch/10/eq/1",
		"/ch/10/eq/2",
		"/ch/10/eq/3",
		"/ch/10/eq/4",
		"/ch/10/mix",
		"/ch/10/mix/01",
		"/ch/10/mix/02",
		"/ch/10/mix/03",
		"/ch/10/mix/04",
		"/ch/10/mix/05",
		"/ch/10/mix/06",
		"/ch/10/mix/07",
		"/ch/10/mix/08",
		"/ch/10/mix/09",
		"/ch/10/mix/10",
		"/ch/10/grp",
		"/ch/10/automix",
		"/ch/11/config",
		"/ch/11/preamp",
		"/ch/11/gate",
		"/ch/11/gate/filter",
		"/ch/11/dyn",
		"/ch/11/dyn/filter",
		"/ch/11/insert",
		"/ch/11/eq",
		"/ch/11/eq/1",
		"/ch/11/eq/2",
		"/ch/11/eq/3",
		"/ch/11/eq/4",
		"/ch/11/mix",
		"/ch/11/mix/01",
		"/ch/11/mix/02",
		"/ch/11/mix/03",
		"/ch/11/mix/04",
		"/ch/11/mix/05",
		"/ch/11/mix/06",
		"/ch/11/mix/07",
		"/ch/11/mix/08",
		"/ch/11/mix/09",
		"/ch/11/mix/10",
		"/ch/11/grp",
		"/ch/11/automix",
		"/ch/12/config",
		"/ch/12/preamp",
		"/ch/12/gate",
		"/ch/12/gate/filter",
		"/ch/12/dyn",
		"/ch/12/dyn/filter",
		"/ch/12/insert",
		"/ch/12/eq",
		"/ch/12/eq/1",
		"/ch/12/eq/2",
		"/ch/12/eq/3",
		"/ch/12/eq/4",
		"/ch/12/mix",
		"/ch/12/mix/01",
		"/ch/12/mix/02",
		"/ch/12/mix/03",
		"/ch/12/mix/04",
		"/ch/12/mix/05",
		"/ch/12/mix/06",
		"/ch/12/mix/07",
		"/ch/12/mix/08",
		"/ch/12/mix/09",
		"/ch/12/mix/10",
		"/ch/12/grp",
		"/ch/12/automix",
		"/ch/13/config",
		"/ch/13/preamp",
		"/ch/13/gate",
		"/ch/13/gate/filter",
		"/ch/13/dyn",
		"/ch/13/dyn/filter",
		"/ch/13/insert",
		"/ch/13/eq",
		"/ch/13/eq/1",
		"/ch/13/eq/2",
		"/ch/13/eq/3",
		"/ch/13/eq/4",
		"/ch/13/mix",
		"/ch/13/mix/01",
		"/ch/13/mix/02",
		"/ch/13/mix/03",
		"/ch/13/mix/04",
		"/ch/13/mix/05",
		"/ch/13/mix/06",
		"/ch/13/mix/07",
		"/ch/13/mix/08",
		"/ch/13/mix/09",
		"/ch/13/mix/10",
		"/ch/13/grp",
		"/ch/13/automix",
		"/ch/14/config",
		"/ch/14/preamp",
		"/ch/14/gate",
		"/ch/14/gate/filter",
		"/ch/14/dyn",
		"/ch/14/dyn/filter",
		"/ch/14/insert",
		"/ch/14/eq",
		"/ch/14/eq/1",
		"/ch/14/eq/2",
		"/ch/14/eq/3",
		"/ch/14/eq/4",
		"/ch/14/mix",
		"/ch/14/mix/01",
		"/ch/14/mix/02",
		"/ch/14/mix/03",
		"/ch/14/mix/04",
		"/ch/14/mix/05",
		"/ch/14/mix/06",
		"/ch/14/mix/07",
		"/ch/14/mix/08",
		"/ch/14/mix/09",
		"/ch/14/mix/10",
		"/ch/14/grp",
		"/ch/14/automix",
		"/ch/15/config",
		"/ch/15/preamp",
		"/ch/15/gate",
		"/ch/15/gate/filter",
		"/ch/15/dyn",
		"/ch/15/dyn/filter",
		"/ch/15/insert",
		"/ch/15/eq",
		"/ch/15/eq/1",
		"/ch/15/eq/2",
		"/ch/15/eq/3",
		"/ch/15/eq/4",
		"/ch/15/mix",
		"/ch/15/mix/01",
		"/ch/15/mix/02",
		"/ch/15/mix/03",
		"/ch/15/mix/04",
		"/ch/15/mix/05",
		"/ch/15/mix/06",
		"/ch/15/mix/07",
		"/ch/15/mix/08",
		"/ch/15/mix/09",
		"/ch/15/mix/10",
		"/ch/15/grp",
		"/ch/15/automix",
		"/ch/16/config",
		"/ch/16/preamp",
		"/ch/16/gate",
		"/ch/16/gate/filter",
		"/ch/16/dyn",
		"/ch/16/dyn/filter",
		"/ch/16/insert",
		"/ch/16/eq",
		"/ch/16/eq/1",
		"/ch/16/eq/2",
		"/ch/16/eq/3",
		"/ch/16/eq/4",
		"/ch/16/mix",
		"/ch/16/mix/01",
		"/ch/16/mix/02",
		"/ch/16/mix/03",
		"/ch/16/mix/04",
		"/ch/16/mix/05",
		"/ch/16/mix/06",
		"/ch/16/mix/07",
		"/ch/16/mix/08",
		"/ch/16/mix/09",
		"/ch/16/mix/10",
		"/ch/16/grp",
		"/ch/16/automix",
        "/rtn/aux/config",
        "/rtn/aux/preamp",
        "/rtn/aux/eq",
        "/rtn/aux/eq/1",
        "/rtn/aux/eq/2",
        "/rtn/aux/eq/3",
        "/rtn/aux/eq/4",
        "/rtn/aux/mix",
        "/rtn/aux/mix/01",
        "/rtn/aux/mix/02",
        "/rtn/aux/mix/03",
        "/rtn/aux/mix/04",
        "/rtn/aux/mix/05",
        "/rtn/aux/mix/06",
        "/rtn/aux/mix/07",
        "/rtn/aux/mix/08",
        "/rtn/aux/mix/09",
        "/rtn/aux/mix/10",
        "/rtn/aux/grp",
        "/rtn/1/config",
        "/rtn/1/preamp",
        "/rtn/1/eq",
        "/rtn/1/eq/1",
        "/rtn/1/eq/2",
        "/rtn/1/eq/3",
        "/rtn/1/eq/4",
        "/rtn/1/mix",
        "/rtn/1/mix/01",
        "/rtn/1/mix/02",
        "/rtn/1/mix/03",
        "/rtn/1/mix/04",
        "/rtn/1/mix/05",
        "/rtn/1/mix/06",
        "/rtn/1/mix/07",
        "/rtn/1/mix/08",
        "/rtn/1/mix/09",
        "/rtn/1/mix/10",
        "/rtn/1/grp",
        "/rtn/2/config",
        "/rtn/2/preamp",
        "/rtn/2/eq",
        "/rtn/2/eq/1",
        "/rtn/2/eq/2",
        "/rtn/2/eq/3",
        "/rtn/2/eq/4",
        "/rtn/2/mix",
        "/rtn/2/mix/01",
        "/rtn/2/mix/02",
        "/rtn/2/mix/03",
        "/rtn/2/mix/04",
        "/rtn/2/mix/05",
        "/rtn/2/mix/06",
        "/rtn/2/mix/07",
        "/rtn/2/mix/08",
        "/rtn/2/mix/09",
        "/rtn/2/mix/10",
        "/rtn/2/grp",
        "/rtn/3/config",
        "/rtn/3/preamp",
        "/rtn/3/eq",
        "/rtn/3/eq/1",
        "/rtn/3/eq/2",
        "/rtn/3/eq/3",
        "/rtn/3/eq/4",
        "/rtn/3/mix",
        "/rtn/3/mix/01",
        "/rtn/3/mix/02",
        "/rtn/3/mix/03",
        "/rtn/3/mix/04",
        "/rtn/3/mix/05",
        "/rtn/3/mix/06",
        "/rtn/3/mix/07",
        "/rtn/3/mix/08",
        "/rtn/3/mix/09",
        "/rtn/3/mix/10",
        "/rtn/3/grp",
        "/rtn/4/config",
        "/rtn/4/preamp",
        "/rtn/4/eq",
        "/rtn/4/eq/1",
        "/rtn/4/eq/2",
        "/rtn/4/eq/3",
        "/rtn/4/eq/4",
        "/rtn/4/mix",
        "/rtn/4/mix/01",
        "/rtn/4/mix/02",
        "/rtn/4/mix/03",
        "/rtn/4/mix/04",
        "/rtn/4/mix/05",
        "/rtn/4/mix/06",
        "/rtn/4/mix/07",
        "/rtn/4/mix/08",
        "/rtn/4/mix/09",
        "/rtn/4/mix/10",
        "/rtn/4/grp",
		"/bus/1/config",
		"/bus/1/dyn",
		"/bus/1/dyn/filter",
		"/bus/1/insert",
		"/bus/1/eq",
		"/bus/1/eq/1",
		"/bus/1/eq/2",
		"/bus/1/eq/3",
		"/bus/1/eq/4",
		"/bus/1/eq/5",
		"/bus/1/eq/6",
		"/bus/1/mix",
        "/bus/1/geq",
		"/bus/1/grp",
		"/bus/2/config",
		"/bus/2/dyn",
		"/bus/2/dyn/filter",
		"/bus/2/insert",
		"/bus/2/eq",
		"/bus/2/eq/1",
		"/bus/2/eq/2",
		"/bus/2/eq/3",
		"/bus/2/eq/4",
		"/bus/2/eq/5",
		"/bus/2/eq/6",
		"/bus/2/mix",
        "/bus/2/geq",
		"/bus/2/grp",
		"/bus/3/config",
		"/bus/3/dyn",
		"/bus/3/dyn/filter",
		"/bus/3/insert",
		"/bus/3/eq",
		"/bus/3/eq/1",
		"/bus/3/eq/2",
		"/bus/3/eq/3",
		"/bus/3/eq/4",
		"/bus/3/eq/5",
		"/bus/3/eq/6",
		"/bus/3/mix",
        "/bus/3/geq",
		"/bus/3/grp",
		"/bus/4/config",
		"/bus/4/dyn",
		"/bus/4/dyn/filter",
		"/bus/4/insert",
		"/bus/4/eq",
		"/bus/4/eq/1",
		"/bus/4/eq/2",
		"/bus/4/eq/3",
		"/bus/4/eq/4",
		"/bus/4/eq/5",
		"/bus/4/eq/6",
		"/bus/4/mix",
        "/bus/4/geq",
		"/bus/4/grp",
		"/bus/5/config",
		"/bus/5/dyn",
		"/bus/5/dyn/filter",
		"/bus/5/insert",
		"/bus/5/eq",
		"/bus/5/eq/1",
		"/bus/5/eq/2",
		"/bus/5/eq/3",
		"/bus/5/eq/4",
		"/bus/5/eq/5",
		"/bus/5/eq/6",
		"/bus/5/mix",
        "/bus/5/geq",
		"/bus/5/grp",
		"/bus/6/config",
		"/bus/6/dyn",
		"/bus/6/dyn/filter",
		"/bus/6/insert",
		"/bus/6/eq",
		"/bus/6/eq/1",
		"/bus/6/eq/2",
		"/bus/6/eq/3",
		"/bus/6/eq/4",
		"/bus/6/eq/5",
		"/bus/6/eq/6",
		"/bus/6/mix",
        "/bus/6/geq",
		"/bus/6/grp",
        "/fxsend/1/config",
        "/fxsend/1/mix",
        "/fxsend/1/grp",
        "/fxsend/2/config",
        "/fxsend/2/mix",
        "/fxsend/2/grp",
        "/fxsend/3/config",
        "/fxsend/3/mix",
        "/fxsend/3/grp",
        "/fxsend/4/config",
        "/fxsend/4/mix",
        "/fxsend/4/grp",
		"/lr/config",
		"/lr/dyn",
		"/lr/dyn/filter",
		"/lr/insert",
		"/lr/eq",
		"/lr/eq/1",
		"/lr/eq/2",
		"/lr/eq/3",
		"/lr/eq/4",
		"/lr/eq/5",
		"/lr/eq/6",
		"/lr/geq",
		"/lr/mix",
        "/dca/1",
        "/dca/1/config",
        "/dca/2",
        "/dca/2/config",
        "/dca/3",
        "/dca/3/config",
        "/dca/4",
        "/dca/4/config",
		"/fx/1",
		"/fx/1/par",
		"/fx/2",
		"/fx/2/par",
		"/fx/3",
		"/fx/3/par",
		"/fx/4",
		"/fx/4/par",
        "/routing/main/01",
        "/routing/main/02",
        "/routing/aux/01",
        "/routing/aux/02",
        "/routing/aux/03",
        "/routing/aux/04",
        "/routing/aux/05",
        "/routing/aux/06",
        "/routing/p16/01",
        "/routing/p16/02",
        "/routing/p16/03",
        "/routing/p16/04",
        "/routing/p16/05",
        "/routing/p16/06",
        "/routing/p16/07",
        "/routing/p16/08",
        "/routing/p16/09",
        "/routing/p16/10",
        "/routing/p16/11",
        "/routing/p16/12",
        "/routing/p16/13",
        "/routing/p16/14",
        "/routing/p16/15",
        "/routing/p16/16",
        "/routing/usb/01",
        "/routing/usb/02",
        "/routing/usb/03",
        "/routing/usb/04",
        "/routing/usb/05",
        "/routing/usb/06",
        "/routing/usb/07",
        "/routing/usb/08",
        "/routing/usb/09",
        "/routing/usb/10",
        "/routing/usb/11",
        "/routing/usb/12",
        "/routing/usb/13",
        "/routing/usb/14",
        "/routing/usb/15",
        "/routing/usb/16",
        "/routing/usb/17",
        "/routing/usb/18",
        "/headamp/01",
		"/headamp/02",
		"/headamp/03",
		"/headamp/04",
		"/headamp/05",
		"/headamp/06",
		"/headamp/07",
		"/headamp/08",
		"/headamp/09",
		"/headamp/10",
		"/headamp/11",
		"/headamp/12",
		"/headamp/13",
		"/headamp/14",
		"/headamp/15",
		"/headamp/16",
		"/headamp/17",
		"/headamp/18",
		"/headamp/19",
		"/headamp/20",
		"/headamp/21",
		"/headamp/22",
		"/headamp/23",
		"/headamp/24"
};
#define Xsc_max	(sizeof (Xsc) / sizeof (char*))

enum Xsc_typ  {
	config_chlink = 0,
	config_buslink,
	config_linkcfg,
	config_solo,
	config_amixenable,
	config_amixlock,
	config_mute,
	ch_01_config,
	ch_01_preamp,
	ch_01_gate,
	ch_01_gate_filter,
	ch_01_dyn,
	ch_01_dyn_filter,
	ch_01_insert,
	ch_01_eq,
	ch_01_eq_1,
	ch_01_eq_2,
	ch_01_eq_3,
	ch_01_eq_4,
	ch_01_mix,
	ch_01_mix_01,
	ch_01_mix_02,
	ch_01_mix_03,
	ch_01_mix_04,
	ch_01_mix_05,
	ch_01_mix_06,
	ch_01_mix_07,
	ch_01_mix_08,
	ch_01_mix_09,
	ch_01_mix_10,
	ch_01_grp,
	ch_01_automix,
	ch_02_config,
	ch_02_preamp,
	ch_02_gate,
	ch_02_gate_filter,
	ch_02_dyn,
	ch_02_dyn_filter,
	ch_02_insert,
	ch_02_eq,
	ch_02_eq_1,
	ch_02_eq_2,
	ch_02_eq_3,
	ch_02_eq_4,
	ch_02_mix,
	ch_02_mix_01,
	ch_02_mix_02,
	ch_02_mix_03,
	ch_02_mix_04,
	ch_02_mix_05,
	ch_02_mix_06,
	ch_02_mix_07,
	ch_02_mix_08,
	ch_02_mix_09,
	ch_02_mix_10,
	ch_02_grp,
	ch_02_automix,
	ch_03_config,
	ch_03_preamp,
	ch_03_gate,
	ch_03_gate_filter,
	ch_03_dyn,
	ch_03_dyn_filter,
	ch_03_insert,
	ch_03_eq,
	ch_03_eq_1,
	ch_03_eq_2,
	ch_03_eq_3,
	ch_03_eq_4,
	ch_03_mix,
	ch_03_mix_01,
	ch_03_mix_02,
	ch_03_mix_03,
	ch_03_mix_04,
	ch_03_mix_05,
	ch_03_mix_06,
	ch_03_mix_07,
	ch_03_mix_08,
	ch_03_mix_09,
	ch_03_mix_10,
	ch_03_grp,
	ch_03_automix,
	ch_04_config,
	ch_04_preamp,
	ch_04_gate,
	ch_04_gate_filter,
	ch_04_dyn,
	ch_04_dyn_filter,
	ch_04_insert,
	ch_04_eq,
	ch_04_eq_1,
	ch_04_eq_2,
	ch_04_eq_3,
	ch_04_eq_4,
	ch_04_mix,
	ch_04_mix_01,
	ch_04_mix_02,
	ch_04_mix_03,
	ch_04_mix_04,
	ch_04_mix_05,
	ch_04_mix_06,
	ch_04_mix_07,
	ch_04_mix_08,
	ch_04_mix_09,
	ch_04_mix_10,
	ch_04_grp,
	ch_04_automix,
	ch_05_config,
	ch_05_preamp,
	ch_05_gate,
	ch_05_gate_filter,
	ch_05_dyn,
	ch_05_dyn_filter,
	ch_05_insert,
	ch_05_eq,
	ch_05_eq_1,
	ch_05_eq_2,
	ch_05_eq_3,
	ch_05_eq_4,
	ch_05_mix,
	ch_05_mix_01,
	ch_05_mix_02,
	ch_05_mix_03,
	ch_05_mix_04,
	ch_05_mix_05,
	ch_05_mix_06,
	ch_05_mix_07,
	ch_05_mix_08,
	ch_05_mix_09,
	ch_05_mix_10,
	ch_05_grp,
	ch_05_automix,
	ch_06_config,
	ch_06_preamp,
	ch_06_gate,
	ch_06_gate_filter,
	ch_06_dyn,
	ch_06_dyn_filter,
	ch_06_insert,
	ch_06_eq,
	ch_06_eq_1,
	ch_06_eq_2,
	ch_06_eq_3,
	ch_06_eq_4,
	ch_06_mix,
	ch_06_mix_01,
	ch_06_mix_02,
	ch_06_mix_03,
	ch_06_mix_04,
	ch_06_mix_05,
	ch_06_mix_06,
	ch_06_mix_07,
	ch_06_mix_08,
	ch_06_mix_09,
	ch_06_mix_10,
	ch_06_grp,
	ch_06_automix,
	ch_07_config,
	ch_07_preamp,
	ch_07_gate,
	ch_07_gate_filter,
	ch_07_dyn,
	ch_07_dyn_filter,
	ch_07_insert,
	ch_07_eq,
	ch_07_eq_1,
	ch_07_eq_2,
	ch_07_eq_3,
	ch_07_eq_4,
	ch_07_mix,
	ch_07_mix_01,
	ch_07_mix_02,
	ch_07_mix_03,
	ch_07_mix_04,
	ch_07_mix_05,
	ch_07_mix_06,
	ch_07_mix_07,
	ch_07_mix_08,
	ch_07_mix_09,
	ch_07_mix_10,
	ch_07_grp,
	ch_07_automix,
	ch_08_config,
	ch_08_preamp,
	ch_08_gate,
	ch_08_gate_filter,
	ch_08_dyn,
	ch_08_dyn_filter,
	ch_08_insert,
	ch_08_eq,
	ch_08_eq_1,
	ch_08_eq_2,
	ch_08_eq_3,
	ch_08_eq_4,
	ch_08_mix,
	ch_08_mix_01,
	ch_08_mix_02,
	ch_08_mix_03,
	ch_08_mix_04,
	ch_08_mix_05,
	ch_08_mix_06,
	ch_08_mix_07,
	ch_08_mix_08,
	ch_08_mix_09,
	ch_08_mix_10,
	ch_08_grp,
	ch_08_automix,
	ch_09_config,
	ch_09_preamp,
	ch_09_gate,
	ch_09_gate_filter,
	ch_09_dyn,
	ch_09_dyn_filter,
	ch_09_insert,
	ch_09_eq,
	ch_09_eq_1,
	ch_09_eq_2,
	ch_09_eq_3,
	ch_09_eq_4,
	ch_09_mix,
	ch_09_mix_01,
	ch_09_mix_02,
	ch_09_mix_03,
	ch_09_mix_04,
	ch_09_mix_05,
	ch_09_mix_06,
	ch_09_mix_07,
	ch_09_mix_08,
	ch_09_mix_09,
	ch_09_mix_10,
	ch_09_grp,
	ch_09_automix,
	ch_10_config,
	ch_10_preamp,
	ch_10_gate,
	ch_10_gate_filter,
	ch_10_dyn,
	ch_10_dyn_filter,
	ch_10_insert,
	ch_10_eq,
	ch_10_eq_1,
	ch_10_eq_2,
	ch_10_eq_3,
	ch_10_eq_4,
	ch_10_mix,
	ch_10_mix_01,
	ch_10_mix_02,
	ch_10_mix_03,
	ch_10_mix_04,
	ch_10_mix_05,
	ch_10_mix_06,
	ch_10_mix_07,
	ch_10_mix_08,
	ch_10_mix_09,
	ch_10_mix_10,
	ch_10_grp,
	ch_10_automix,
	ch_11_config,
	ch_11_preamp,
	ch_11_gate,
	ch_11_gate_filter,
	ch_11_dyn,
	ch_11_dyn_filter,
	ch_11_insert,
	ch_11_eq,
	ch_11_eq_1,
	ch_11_eq_2,
	ch_11_eq_3,
	ch_11_eq_4,
	ch_11_mix,
	ch_11_mix_01,
	ch_11_mix_02,
	ch_11_mix_03,
	ch_11_mix_04,
	ch_11_mix_05,
	ch_11_mix_06,
	ch_11_mix_07,
	ch_11_mix_08,
	ch_11_mix_09,
	ch_11_mix_10,
	ch_11_grp,
	ch_11_automix,
	ch_12_config,
	ch_12_preamp,
	ch_12_gate,
	ch_12_gate_filter,
	ch_12_dyn,
	ch_12_dyn_filter,
	ch_12_insert,
	ch_12_eq,
	ch_12_eq_1,
	ch_12_eq_2,
	ch_12_eq_3,
	ch_12_eq_4,
	ch_12_mix,
	ch_12_mix_01,
	ch_12_mix_02,
	ch_12_mix_03,
	ch_12_mix_04,
	ch_12_mix_05,
	ch_12_mix_06,
	ch_12_mix_07,
	ch_12_mix_08,
	ch_12_mix_09,
	ch_12_mix_10,
	ch_12_grp,
	ch_12_automix,
	ch_13_config,
	ch_13_preamp,
	ch_13_gate,
	ch_13_gate_filter,
	ch_13_dyn,
	ch_13_dyn_filter,
	ch_13_insert,
	ch_13_eq,
	ch_13_eq_1,
	ch_13_eq_2,
	ch_13_eq_3,
	ch_13_eq_4,
	ch_13_mix,
	ch_13_mix_01,
	ch_13_mix_02,
	ch_13_mix_03,
	ch_13_mix_04,
	ch_13_mix_05,
	ch_13_mix_06,
	ch_13_mix_07,
	ch_13_mix_08,
	ch_13_mix_09,
	ch_13_mix_10,
	ch_13_grp,
	ch_13_automix,
	ch_14_config,
	ch_14_preamp,
	ch_14_gate,
	ch_14_gate_filter,
	ch_14_dyn,
	ch_14_dyn_filter,
	ch_14_insert,
	ch_14_eq,
	ch_14_eq_1,
	ch_14_eq_2,
	ch_14_eq_3,
	ch_14_eq_4,
	ch_14_mix,
	ch_14_mix_01,
	ch_14_mix_02,
	ch_14_mix_03,
	ch_14_mix_04,
	ch_14_mix_05,
	ch_14_mix_06,
	ch_14_mix_07,
	ch_14_mix_08,
	ch_14_mix_09,
	ch_14_mix_10,
	ch_14_grp,
	ch_14_automix,
	ch_15_config,
	ch_15_preamp,
	ch_15_gate,
	ch_15_gate_filter,
	ch_15_dyn,
	ch_15_dyn_filter,
	ch_15_insert,
	ch_15_eq,
	ch_15_eq_1,
	ch_15_eq_2,
	ch_15_eq_3,
	ch_15_eq_4,
	ch_15_mix,
	ch_15_mix_01,
	ch_15_mix_02,
	ch_15_mix_03,
	ch_15_mix_04,
	ch_15_mix_05,
	ch_15_mix_06,
	ch_15_mix_07,
	ch_15_mix_08,
	ch_15_mix_09,
	ch_15_mix_10,
	ch_15_grp,
	ch_15_automix,
	ch_16_config,
	ch_16_preamp,
	ch_16_gate,
	ch_16_gate_filter,
	ch_16_dyn,
	ch_16_dyn_filter,
	ch_16_insert,
	ch_16_eq,
	ch_16_eq_1,
	ch_16_eq_2,
	ch_16_eq_3,
	ch_16_eq_4,
	ch_16_mix,
	ch_16_mix_01,
	ch_16_mix_02,
	ch_16_mix_03,
	ch_16_mix_04,
	ch_16_mix_05,
	ch_16_mix_06,
	ch_16_mix_07,
	ch_16_mix_08,
	ch_16_mix_09,
	ch_16_mix_10,
	ch_16_grp,
	ch_16_automix,
    rtn_aux_config,
    rtn_aux_preamp,
    rtn_aux_eq,
    rtn_aux_eq_1,
    rtn_aux_eq_2,
    rtn_aux_eq_3,
    rtn_aux_eq_4,
    rtn_aux_mix,
    rtn_aux_mix_01,
    rtn_aux_mix_02,
    rtn_aux_mix_03,
    rtn_aux_mix_04,
    rtn_aux_mix_05,
    rtn_aux_mix_06,
    rtn_aux_mix_07,
    rtn_aux_mix_08,
    rtn_aux_mix_09,
    rtn_aux_mix_10,
    rtn_aux_grp,
    rtn_1_config,
    rtn_1_preamp,
    rtn_1_eq,
    rtn_1_eq_1,
    rtn_1_eq_2,
    rtn_1_eq_3,
    rtn_1_eq_4,
    rtn_1_mix,
    rtn_1_mix_01,
    rtn_1_mix_02,
    rtn_1_mix_03,
    rtn_1_mix_04,
    rtn_1_mix_05,
    rtn_1_mix_06,
    rtn_1_mix_07,
    rtn_1_mix_08,
    rtn_1_mix_09,
    rtn_1_mix_10,
    rtn_1_grp,
    rtn_2_config,
    rtn_2_preamp,
    rtn_2_eq,
    rtn_2_eq_1,
    rtn_2_eq_2,
    rtn_2_eq_3,
    rtn_2_eq_4,
    rtn_2_mix,
    rtn_2_mix_01,
    rtn_2_mix_02,
    rtn_2_mix_03,
    rtn_2_mix_04,
    rtn_2_mix_05,
    rtn_2_mix_06,
    rtn_2_mix_07,
    rtn_2_mix_08,
    rtn_2_mix_09,
    rtn_2_mix_10,
    rtn_2_grp,
    rtn_3_config,
    rtn_3_preamp,
    rtn_3_eq,
    rtn_3_eq_1,
    rtn_3_eq_2,
    rtn_3_eq_3,
    rtn_3_eq_4,
    rtn_3_mix,
    rtn_3_mix_01,
    rtn_3_mix_02,
    rtn_3_mix_03,
    rtn_3_mix_04,
    rtn_3_mix_05,
    rtn_3_mix_06,
    rtn_3_mix_07,
    rtn_3_mix_08,
    rtn_3_mix_09,
    rtn_3_mix_10,
    rtn_3_grp,
    rtn_4_config,
    rtn_4_preamp,
    rtn_4_eq,
    rtn_4_eq_1,
    rtn_4_eq_2,
    rtn_4_eq_3,
    rtn_4_eq_4,
    rtn_4_mix,
    rtn_4_mix_01,
    rtn_4_mix_02,
    rtn_4_mix_03,
    rtn_4_mix_04,
    rtn_4_mix_05,
    rtn_4_mix_06,
    rtn_4_mix_07,
    rtn_4_mix_08,
    rtn_4_mix_09,
    rtn_4_mix_10,
    rtn_4_grp,
	bus_1_config,
	bus_1_dyn,
	bus_1_dyn_filter,
	bus_1_insert,
	bus_1_eq,
	bus_1_eq_1,
	bus_1_eq_2,
	bus_1_eq_3,
	bus_1_eq_4,
	bus_1_eq_5,
	bus_1_eq_6,
	bus_1_mix,
    bus_1_geq,
	bus_1_grp,
	bus_2_config,
	bus_2_dyn,
	bus_2_dyn_filter,
	bus_2_insert,
	bus_2_eq,
	bus_2_eq_1,
	bus_2_eq_2,
	bus_2_eq_3,
	bus_2_eq_4,
	bus_2_eq_5,
	bus_2_eq_6,
	bus_2_mix,
    bus_2_geq,
	bus_2_grp,
	bus_3_config,
	bus_3_dyn,
	bus_3_dyn_filter,
	bus_3_insert,
	bus_3_eq,
	bus_3_eq_1,
	bus_3_eq_2,
	bus_3_eq_3,
	bus_3_eq_4,
	bus_3_eq_5,
	bus_3_eq_6,
	bus_3_mix,
    bus_3_geq,
	bus_3_grp,
	bus_4_config,
	bus_4_dyn,
	bus_4_dyn_filter,
	bus_4_insert,
	bus_4_eq,
	bus_4_eq_1,
	bus_4_eq_2,
	bus_4_eq_3,
	bus_4_eq_4,
	bus_4_eq_5,
	bus_4_eq_6,
	bus_4_mix,
    bus_4_geq,
	bus_4_grp,
	bus_5_config,
	bus_5_dyn,
	bus_5_dyn_filter,
	bus_5_insert,
	bus_5_eq,
	bus_5_eq_1,
	bus_5_eq_2,
	bus_5_eq_3,
	bus_5_eq_4,
	bus_5_eq_5,
	bus_5_eq_6,
	bus_5_mix,
    bus_5_geq,
	bus_5_grp,
	bus_6_config,
	bus_6_dyn,
	bus_6_dyn_filter,
	bus_6_insert,
	bus_6_eq,
	bus_6_eq_1,
	bus_6_eq_2,
	bus_6_eq_3,
	bus_6_eq_4,
	bus_6_eq_5,
	bus_6_eq_6,
	bus_6_mix,
    bus_6_geq,
	bus_6_grp,
	fxsend_1_config,
	fxsend_1_mix,
	fxsend_1_grp,
	fxsend_2_config,
	fxsend_2_mix,
	fxsend_2_grp,
	fxsend_3_config,
	fxsend_3_mix,
	fxsend_3_grp,
	fxsend_4_config,
	fxsend_4_mix,
	fxsend_4_grp,
	lr_config,
	lr_dyn,
	lr_dyn_filter,
	lr_insert,
	lr_eq,
	lr_eq_1,
	lr_eq_2,
	lr_eq_3,
	lr_eq_4,
	lr_eq_5,
	lr_eq_6,
	lr_geq,
    lr_mix,
	dca_1,
	dca_1_config,
	dca_2,
	dca_2_config,
	dca_3,
	dca_3_config,
	dca_4,
	dca_4_config,
	fx_1,
	fx_1_par,
	fx_2,
	fx_2_par,
	fx_3,
	fx_3_par,
	fx_4,
	fx_4_par,
    routing_main_01,
    routing_main_02,
    routing_aux_01,
    routing_aux_02,
    routing_aux_03,
    routing_aux_04,
    routing_aux_05,
    routing_aux_06,
    routing_p16_01,
    routing_p16_02,
    routing_p16_03,
    routing_p16_04,
    routing_p16_05,
    routing_p16_06,
    routing_p16_07,
    routing_p16_08,
    routing_p16_09,
    routing_p16_10,
    routing_p16_11,
    routing_p16_12,
    routing_p16_13,
    routing_p16_14,
    routing_p16_15,
    routing_p16_16,
    routing_usb_01,
    routing_usb_02,
    routing_usb_03,
    routing_usb_04,
    routing_usb_05,
    routing_usb_06,
    routing_usb_07,
    routing_usb_08,
    routing_usb_09,
    routing_usb_10,
    routing_usb_11,
    routing_usb_12,
    routing_usb_13,
    routing_usb_14,
    routing_usb_15,
    routing_usb_16,
    routing_usb_17,
    routing_usb_18,
	headamp_01,
	headamp_02,
	headamp_03,
	headamp_04,
	headamp_05,
	headamp_06,
	headamp_07,
	headamp_08,
	headamp_09,
	headamp_10,
	headamp_11,
	headamp_12,
	headamp_13,
	headamp_14,
	headamp_15,
	headamp_16,
	headamp_17,
	headamp_18,
	headamp_19,
	headamp_20,
	headamp_21,
	headamp_22,
	headamp_23,
	headamp_24
};

char* Xsource[] = {"OFF", "LR", "LRPFL", "LRAFL", "AUX", "U1718",
        "Bus1", "Bus2", "Bus3", "Bus4", "Bus5", "Bus6",
        "Bus12", "Bus34", "Bus56"};
#define Xsource_max	(sizeof (Xsource) / sizeof (char*))

// Doc is wrong the order
// not this: char* Xgatemode[] = {"GATE", "EXP2", "EXP3", "EXP4", "DUCK"};
char* Xgatemode[] = {"EXP2", "EXP3", "EXP4", "GATE", "DUCK"};
#define Xgatemode_max	(sizeof (Xgatemode) / sizeof (char*))

char* Xfiltertype[] = {"LC6", "LC12", "HC6", "HC12", "1.0", "2.0", "3.0", "5.0", "10.0"};
#define Xfiltertype_max	(sizeof (Xfiltertype) / sizeof (char*))

char* Xdynratio[] = {"1.1", "1.3", "1.5", "2.0", "2.5", "3.0", "4.0", "5.0", "7.0", "10", "20", "100"};
#define Xdynratio_max	(sizeof (Xdynratio) / sizeof (char*))

char* Xinsrc[] = {"In01", "In02", "In03", "In04", "In05", "In06", "In07", "In08",
        "In09", "In10", "In11", "In12", "In13", "In14", "In15", "In16", "OFF"};
#define Xinsrc_max	(sizeof (Xinsrc) / sizeof (char*))

char* Xchrtnsrc[] = {"U01", "U02", "U03", "U04", "U05", "U06", "U07", "U08", "U09",
        "U10", "U11", "U12", "U13", "U14", "U15", "U16", "U17", "U18"};
#define Xchrtnsrc_max	(sizeof (Xchrtnsrc) / sizeof (char*))

char* Xrtnrtnsrc[] = {"U0102", "U0304", "U0506", "U0708", "U0910",
        "U1112", "U1314", "U1516", "U1718"};
#define Xrtnrtnsrc_max	(sizeof (Xrtnrtnsrc) / sizeof (char*))

char* Xkeysrc[] = {"SELF", "Ch01", "Ch02", "Ch03", "Ch04", "Ch05", "Ch06", "Ch07", "Ch08",
        "Ch09", "Ch10", "Ch11", "Ch12", "Ch13", "Ch14", "Ch15", "Ch16",
        "Bus1", "Bus2", "Bus3", "Bus4", "Bus5", "Bus6"};
#define Xkeysrc_max	(sizeof (Xkeysrc) / sizeof (char*))

char* Xmainsrc[] = {"LR", "MON", "U0102", "U0304", "U0506", "U0708", "U0910",
        "U1112", "U1314", "U1516", "U1718"};
#define Xmainsrc_max	(sizeof (Xmainsrc) / sizeof (char*))

char* Xauxsrc[] = {"Ch01", "Ch02", "Ch03", "Ch04", "Ch05", "Ch06", "Ch07", "Ch08", "Ch09",
        "Ch10", "Ch11", "Ch12", "Ch13", "Ch14", "Ch15", "Ch16", "AuxL", "AuxR",
        "Fx1L", "Fx1R", "Fx2L", "Fx2R", "Fx3L", "Fx3R", "Fx4L", "Fx4R",
        "Bus1", "Bus2", "Bus3", "Bus4", "Bus5", "Bus6",
        "Send1", "Send2", "Send3", "Send4",
        "L", "R",
        "U01", "U02", "U03", "U04", "U05", "U06", "U07", "U08", "U09",
        "U10", "U11", "U12", "U13", "U14", "U15", "U16", "U17", "U18"};
#define Xauxsrc_max	(sizeof (Xauxsrc) / sizeof (char*))

char* Xusbsrc[] = {"Ch01", "Ch02", "Ch03", "Ch04", "Ch05", "Ch06", "Ch07", "Ch08", "Ch09",
        "Ch10", "Ch11", "Ch12", "Ch13", "Ch14", "Ch15", "Ch16", "AuxL", "AuxR",
        "Fx1L", "Fx1R", "Fx2L", "Fx2R", "Fx3L", "Fx3R", "Fx4L", "Fx4R",
        "Bus1", "Bus2", "Bus3", "Bus4", "Bus5", "Bus6",
        "Send1", "Send2", "Send3", "Send4", "L", "R"};
#define Xusbsrc_max	(sizeof (Xusbsrc) / sizeof (char*))

char* Xsrcpos[] = {"AIN", "AIN+M", "IN", "IN+M", "PREEQ", "PREEQ+M", "POSTEQ", "POSTEQ+M", "PRE", "PRE+M", "POST"};
#define Xsrcpos_max	(sizeof (Xsrcpos) / sizeof (char*))

char* Xchfxslot[] = {"OFF", "Fx1A", "Fx1B", "Fx2A", "Fx2B", "Fx3A", "Fx3B", "Fx4A", "Fx4B"};
#define Xchfxslot_max	(sizeof (Xchfxslot) / sizeof (char*))

char* Xlrfxslot[] = {"OFF", "Fx1", "Fx2", "Fx3", "Fx4"};
#define Xlrfxslot_max	(sizeof (Xlrfxslot) / sizeof (char*))

char* Xmxtap[] = {"IN", "PREEQ", "POSTEQ", "PRE", "POST", "GRP"};
#define Xmxtap_max	(sizeof (Xmxtap) / sizeof (char*))

char* Xamgroup[] = {"OFF", "X", "Y"};
#define Xamgroup_max	(sizeof (Xamgroup) / sizeof (char*))

char* Xeqmode[] = {"PEQ", "GEQ", "TEQ"};
#define Xeqmode_max	(sizeof (Xeqmode) / sizeof (char*))

char* Xeqtyp[] = {"LCut", "LShv", "PEQ", "VEQ", "HShv", "HCut"};
#define Xeqtyp_max	(sizeof (Xeqtyp) / sizeof (char*))

//
// String array types declarations used in FX (effects)

char* Xfxtyp4[] = {"HALL", "AMBI", "RPLT", "ROOM", "CHAM", "PLAT", "VREV", "VRM",
		"GATE", "RVRS", "DLY", "3TAP", "4TAP", "CRS", "FLNG", "PHAS", "DIMC", "FILT",
		"ROTA", "PAN", "SUB", "D/RV", "CR/R", "FL/R", "D/CR", "D/FL", "MODD", "GEQ2",
		"GEQ", "TEQ2", "TEQ", "DES2", "DES", "P1A", "P1A2", "PQ5", "PQ5S", "WAVD",
		"LIM", "CMB", "CMB2", "FAC", "FAC1M", "FAC2", "LEC", "LEC2", "ULC", "ULC2",
		"ENH2", "ENH", "EXC2", "EXC", "IMG", "EDI", "SON", "AMP2", "AMP", "DRV2",
		"DRV", "PIT2", "PIT"};

int Xfxtyp4_max = (sizeof (Xfxtyp4) / sizeof (char*));

char* l_factor[] = {"1/4", "3/8", "1/2", "2/3", "1", "4/3", "3/2", "2", "3"};
int ll_factor = (sizeof(l_factor) / sizeof (char*));

char* l_mode[] = {"ST", "X", "M"};
int ll_mode	= (sizeof (l_mode) / sizeof (char*));

char* l_fmode[] = {"LP", "HP", "BP", "NO"};
int ll_fmode = (sizeof (l_fmode) / sizeof (char*));

char* l_fwave[] = {"TRI", "SIN", "SAW", "SAW-", "RMP", "SQU", "RND"};
int ll_fwave = (sizeof (l_fwave) / sizeof (char*));

char* l_srange[] = {"LO", "MID", "HI"};
int ll_srange = (sizeof (l_srange) / sizeof (char*));

char* l_pattern[] = {"1/4", "1/3", "3/8", "1/2", "2/3", "3/4", "1", "1/4X", "1/3X", "3/8X", "1/2X", "2/3X", "3/4X","1X"};
int ll_pattern = (sizeof(l_pattern) / sizeof (char*));

// Per XAir OSC Spec 1.09
char* l_dtype[] = {"AMB", "CLUB", "HALL"};
int ll_dtype = (sizeof (l_dtype) / sizeof (char*));

// What the /node OSC command actually returns with firmware 1.12
char* l_rtype[] = {"AMB", "SML", "LRG"};
int ll_rtype = (sizeof (l_rtype) / sizeof (char*));

char* l_ddelay[] = {"1", "1/2", "2/3", "3/2"};
int ll_ddelay = (sizeof (l_ddelay) / sizeof (char*));

char* l_plfreq[] = {"0", "30", "60", "100"};
int ll_plfreq = (sizeof (l_plfreq) / sizeof (char*));

char* l_phfreq[] = {"3K", "4K", "5K", "8K", "10K", "12K", "16K"};
int ll_phfreq = (sizeof (l_phfreq) / sizeof (char*));

char* l_pasel[] = {"5K", "10K", "20K"};
int ll_pasel = (sizeof (l_pasel) / sizeof (char*));

char* l_qllfreq[] = {"200", "300", "500", "700", "1000"};
int ll_qllfreq = (sizeof (l_qllfreq) / sizeof (char*));

char* l_qmlfreq[] = {"200", "300", "500", "700", "1k", "1k5", "2k", "3k", "4k", "5k", "7k"};
int ll_qmlfreq = (sizeof (l_qmlfreq) / sizeof (char*));

char* l_qhlfreq[] = {"1k5", "2k", "3k", "4k", "5k"};
int ll_qhlfreq = (sizeof (l_qhlfreq) / sizeof (char*));

char* l_bcmb[] = {"OFF", "Bd1", "Bd2", "Bd3", "Bd4", "Bd5"};
int ll_bcmb = (sizeof (l_bcmb) / sizeof (char*));

char* l_rcmb[] = {"1.1", "1.2", "1.3", "1.5", "1.7", "2", "2.5", "3", "3.5", "4", "5", "7", "10", "LIM"};
int ll_rcmb = (sizeof (l_rcmb) / sizeof (char*));

// What /node OSC Command returns
char* 	l_mcmb[] = {"GR", "SBC", "PEAK"};
int ll_mcmb = (sizeof (l_mcmb) / sizeof (char*));

// What XAir Edit saves in a scene file
char* 	l_mcmb2[] = {"GRA", "GRB", "PEAKA"};
int ll_mcmb2 = (sizeof (l_mcmb2) / sizeof (char*));

char* l_rulc[] = {"4", "8", "12", "20", "ALL"};
int	ll_rulc = (sizeof (l_rulc) / sizeof (char*));

#endif /* X32SETSCENE_H_ */
