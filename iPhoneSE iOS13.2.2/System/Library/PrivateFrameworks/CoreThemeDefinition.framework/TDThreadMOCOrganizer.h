/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:09 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSThread, CoreThemeDocument;

@interface TDThreadMOCOrganizer : NSObject {

	NSThread* mainThread;
	CoreThemeDocument* document;

}
-(id)init;
-(id)mainThread;
-(id)document;
-(id)initWithDocument:(id)arg1 mainThread:(id)arg2 ;
-(id)threadMOC;
-(id)mainMOC;
-(void)setThreadMOC:(id)arg1 ;
@end

