/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:20 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSURL;

@interface ICMusicRestoreBagConfiguration : NSObject {

	BOOL _shouldGZip;
	NSArray* _allowedKinds;
	NSArray* _allowedMatchStatus;
	NSURL* _restoreURL;

}

@property (nonatomic,copy,readonly) NSArray * allowedKinds;                    //@synthesize allowedKinds=_allowedKinds - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allowedMatchStatus;              //@synthesize allowedMatchStatus=_allowedMatchStatus - In the implementation block
@property (nonatomic,copy,readonly) NSURL * restoreURL;                        //@synthesize restoreURL=_restoreURL - In the implementation block
@property (nonatomic,readonly) BOOL shouldGZip;                                //@synthesize shouldGZip=_shouldGZip - In the implementation block
-(id)initWithServerConfiguration:(id)arg1 ;
-(NSArray *)allowedKinds;
-(NSArray *)allowedMatchStatus;
-(NSURL *)restoreURL;
-(BOOL)shouldGZip;
@end
