/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:16 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MPCPrivateListeningStateSource.h>

@class ICUserIdentity, NSNumber;

@interface _MPCPrivateListeningStateUserIdentitySource : MPCPrivateListeningStateSource {

	ICUserIdentity* _userIdentity;
	NSNumber* _cachedValue;

}
+(BOOL)supportsSecureCoding;
+(id)sharedAccessQueue;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)currentValue;
-(id)_initWithUserIdentity:(id)arg1 ;
-(void)_handleUserIdentityStoreDidChangeNotification:(id)arg1 ;
-(void)_loadCurrentValueFromIdentityProperties;
@end

