/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:20 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/CoreAccessories/PlugIns/Features/HID.feature/HID
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AccessoryHIDClientProtocol <NSObject>
@required
-(id)createHIDDescriptor:(id)arg1;
-(BOOL)deleteHIDDescriptor:(id)arg1;
-(BOOL)processInReport:(id)arg1 forUUID:(id)arg2;
-(BOOL)processGetReportResponse:(id)arg1 reportType:(unsigned char)arg2 reportID:(unsigned char)arg3 forUUID:(id)arg4;

@end
