/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/CFPDDataBuffer.h>

@interface CFPDCFDataBuffer : CFPDDataBuffer {

	CFDataRef data;

}
-(void)dealloc;
-(unsigned long long)length;
-(void*)bytes;
-(CFDataRef)copyCFData;
-(id)copyXPCData;
-(id)initWithCFData:(CFDataRef)arg1 ;
@end
