  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 1;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtP)
    ;%
      section.nData     = 42;
      section.data(42)  = dumData; %prealloc
      
	  ;% rtP.DCVoltageSource12V_Amplitude
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.PIDController_D
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtP.PIDController_I
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtP.PIDController_InitialConditionForFilter
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtP.PIDController_InitialConditionForIntegrator
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtP.PIDController_N
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtP.PIDController_P
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtP.RepeatingSequence_rep_seq_y
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtP.Gain_Gain
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 9;
	
	  ;% rtP.Constant_Value
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 10;
	
	  ;% rtP.StateSpace_P1_Size
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 11;
	
	  ;% rtP.StateSpace_P1
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 13;
	
	  ;% rtP.StateSpace_P2_Size
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 132;
	
	  ;% rtP.StateSpace_P2
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 134;
	
	  ;% rtP.StateSpace_P3_Size
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 138;
	
	  ;% rtP.StateSpace_P3
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 140;
	
	  ;% rtP.StateSpace_P4_Size
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 143;
	
	  ;% rtP.StateSpace_P4
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 145;
	
	  ;% rtP.StateSpace_P5_Size
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 723;
	
	  ;% rtP.StateSpace_P5
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 725;
	
	  ;% rtP.StateSpace_P6_Size
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 729;
	
	  ;% rtP.StateSpace_P6
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 731;
	
	  ;% rtP.StateSpace_P7_Size
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 733;
	
	  ;% rtP.StateSpace_P7
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 735;
	
	  ;% rtP.StateSpace_P8_Size
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 737;
	
	  ;% rtP.StateSpace_P8
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 739;
	
	  ;% rtP.StateSpace_P9_Size
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 741;
	
	  ;% rtP.StateSpace_P9
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 743;
	
	  ;% rtP.StateSpace_P10_Size
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 744;
	
	  ;% rtP.StateSpace_P10
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 746;
	
	  ;% rtP.integrator_IC
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 747;
	
	  ;% rtP.TransportDelay_Delay
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 748;
	
	  ;% rtP.TransportDelay_InitOutput
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 749;
	
	  ;% rtP.K1_Value
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 750;
	
	  ;% rtP.Memory_InitialCondition
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 751;
	
	  ;% rtP.donotdeletethisgain_Gain
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 752;
	
	  ;% rtP.LookUpTable1_bp01Data
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 753;
	
	  ;% rtP.donotdeletethisgain_Gain_fqzwhw3qlf
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 755;
	
	  ;% rtP.Constant_Value_kpkyenjwdq
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 756;
	
	  ;% rtP.Constant_Value_fyzozc4wzq
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 757;
	
	  ;% rtP.eee_Value
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 758;
	
	  ;% rtP.gate_Value
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 759;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 2;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtB)
    ;%
      section.nData     = 22;
      section.data(22)  = dumData; %prealloc
      
	  ;% rtB.jwld2otcqe
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.mvg2n3jsda
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 2;
	
	  ;% rtB.njamja3elk
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 6;
	
	  ;% rtB.n3lt3gcgaq
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 7;
	
	  ;% rtB.fseab3nnid
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 8;
	
	  ;% rtB.lzkjpemtzl
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 9;
	
	  ;% rtB.byzllgsbmh
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 10;
	
	  ;% rtB.ntzgholibf
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 11;
	
	  ;% rtB.p305evyac5
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 12;
	
	  ;% rtB.hsuga2dhnf
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 13;
	
	  ;% rtB.glxss2ulmc
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 14;
	
	  ;% rtB.pvcie1a5tt
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 15;
	
	  ;% rtB.jkou5c1tf5
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 16;
	
	  ;% rtB.phn5u4ju5u
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 17;
	
	  ;% rtB.nc54yc0wg2
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 18;
	
	  ;% rtB.g4haxbo4nw
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 19;
	
	  ;% rtB.ak52jwgs24
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 20;
	
	  ;% rtB.o22v5z0fum
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 21;
	
	  ;% rtB.b5zu12nw5c
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 22;
	
	  ;% rtB.loif4t1zya
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 23;
	
	  ;% rtB.ivxphhjz2b
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 24;
	
	  ;% rtB.b0gmvcjor3
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 25;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.crpszgzido
	  section.data(1).logicalSrcIdx = 22;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 4;
    sectIdxOffset = 2;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtDW)
    ;%
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% rtDW.cmlmjzljsv
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.jp1g2it1ba
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.fxsllhtyy4.modelTStart
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 9;
      section.data(9)  = dumData; %prealloc
      
	  ;% rtDW.f3fcweuhai
	  section.data(1).logicalSrcIdx = 3;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.ds5e0njkvh.TUbufferPtrs
	  section.data(2).logicalSrcIdx = 4;
	  section.data(2).dtTransOffset = 22;
	
	  ;% rtDW.g32qnehjn1.LoggedData
	  section.data(3).logicalSrcIdx = 5;
	  section.data(3).dtTransOffset = 24;
	
	  ;% rtDW.ghz3iauwmh.AQHandles
	  section.data(4).logicalSrcIdx = 6;
	  section.data(4).dtTransOffset = 25;
	
	  ;% rtDW.ei3ribixeo.AQHandles
	  section.data(5).logicalSrcIdx = 7;
	  section.data(5).dtTransOffset = 26;
	
	  ;% rtDW.h5zmdhih00.AQHandles
	  section.data(6).logicalSrcIdx = 8;
	  section.data(6).dtTransOffset = 27;
	
	  ;% rtDW.jfvbwfvbfd.LoggedData
	  section.data(7).logicalSrcIdx = 9;
	  section.data(7).dtTransOffset = 28;
	
	  ;% rtDW.dpm41iscdf.LoggedData
	  section.data(8).logicalSrcIdx = 10;
	  section.data(8).dtTransOffset = 30;
	
	  ;% rtDW.hkvyyqjk2k.LoggedData
	  section.data(9).logicalSrcIdx = 11;
	  section.data(9).dtTransOffset = 31;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% rtDW.h2sv51bdk0
	  section.data(1).logicalSrcIdx = 12;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.ki4nfkwjpt.Tail
	  section.data(2).logicalSrcIdx = 13;
	  section.data(2).dtTransOffset = 23;
	
	  ;% rtDW.lry5fglmvi
	  section.data(3).logicalSrcIdx = 14;
	  section.data(3).dtTransOffset = 24;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.cxfvdt3yaf
	  section.data(1).logicalSrcIdx = 15;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 3654228086;
  targMap.checksum1 = 2293059367;
  targMap.checksum2 = 3043174388;
  targMap.checksum3 = 3143096838;

