/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct {
	OpaqueAudioQueue field1;
	A field2;
	u field3;
	double field4;
	int field5;
	o field6;
	unsigned short field7;
	t field8;
	const  field9;
	e field10;
	a field11;
	m field12;
	BOOL field13;
	a field14;
	short field15;
	int field16;
	char field17;
	D field18;
	e field19;
	short field20;
	char field21;
	const  field22;
	int field23;
	p field24;
	t field25;
	int field26;
	o field27;
	n field28;
	AudioQueueBuffer field29[100];
	O field30;
	p field31;
	a field32;
	long long field33;
	u field34;
	e field35;
	A field36;
	u field37;
	double field38;
	int field39;
	o field40;
	F field41;
	int field42;
	long field43;
	e field44;
	unsigned field45;
	D field46;
	unsigned field47;
	long long field48;
	int field49;
} SCD_Struct_RP0;

typedef struct AudioStreamBasicDescription {
	double mSampleRate;
	unsigned mFormatID;
	unsigned mFormatFlags;
	unsigned mBytesPerPacket;
	unsigned mFramesPerPacket;
	unsigned mBytesPerFrame;
	unsigned mChannelsPerFrame;
	unsigned mBitsPerChannel;
	unsigned mReserved;
} AudioStreamBasicDescription;

typedef struct {
	OpaqueAudioQueue field1;
	AudioStreamBasicDescription field2;
	AudioQueueBuffer field3[100];
	O field4;
	p field5;
	a field6;
	long long field7;
	u field8;
	e field9;
	A field10;
	u field11;
	double field12;
	int field13;
	o field14;
	F field15;
	int field16;
	long field17;
	e field18;
	unsigned field19;
	D field20;
	unsigned field21;
	long long field22;
	int field23;
} SCD_Struct_RP2;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;
