/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:04 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class BRCItemID, NSString;


@protocol BRCSyncThrottleItemProtocol
@property (nonatomic,readonly) BRCItemID * itemID; 
@property (nonatomic,readonly) NSString * path; 
@property (nonatomic,readonly) NSString * logicalName; 
@property (nonatomic,readonly) NSString * extension; 
@property (nonatomic,readonly) NSString * appLibraryID; 
@required
-(NSString *)path;
-(BRCItemID *)itemID;
-(NSString *)extension;
-(NSString *)logicalName;
-(NSString *)appLibraryID;

@end

