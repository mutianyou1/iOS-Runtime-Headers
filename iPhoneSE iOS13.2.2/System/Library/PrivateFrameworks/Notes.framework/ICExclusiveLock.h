/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:13 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSLocking.h>

@class NSString;

@interface ICExclusiveLock : NSObject <NSLocking> {

	int _fd;
	NSString* _name;
	NSString* _cachePath;
	NSString* _fullPath;

}
-(id)init;
-(void)dealloc;
-(id)name;
-(void)lock;
-(void)unlock;
-(void)setName:(id)arg1 ;
-(BOOL)tryLock;
-(id)initWithName:(id)arg1 cachePath:(id)arg2 ;
@end

