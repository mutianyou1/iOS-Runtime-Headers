/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSCloudKitMirroringResult.h>

@class NSDictionary;

@interface NSCloudKitMirroringExportProgressResult : NSCloudKitMirroringResult {

	NSDictionary* _objectIDToLastExportedToken;

}

@property (nonatomic,readonly) NSDictionary * objectIDToLastExportedToken;              //@synthesize objectIDToLastExportedToken=_objectIDToLastExportedToken - In the implementation block
-(void)dealloc;
-(id)initWithRequest:(id)arg1 objectIDToLastExportedToken:(id)arg2 error:(id)arg3 ;
-(NSDictionary *)objectIDToLastExportedToken;
@end

