/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:45 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTask.h>

@class CoreDAVAction;

@interface CoreDAVActionBackedTask : CoreDAVTask {

	CoreDAVAction* _backingAction;

}

@property (nonatomic,retain) CoreDAVAction * backingAction;              //@synthesize backingAction=_backingAction - In the implementation block
-(id)description;
-(CoreDAVAction *)backingAction;
-(void)setBackingAction:(CoreDAVAction *)arg1 ;
@end

