/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:02 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/SOAuthorizationDelegate.h>

@class NSString;

@interface WKSOAuthorizationDelegate : NSObject <SOAuthorizationDelegate> {

	RefPtr<WebKit::SOAuthorizationSession, WTF::DumbPtrTraits<WebKit::SOAuthorizationSession> >* _session;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSession:(RefPtr<WebKit::SOAuthorizationSession, WTF::DumbPtrTraits<WebKit::SOAuthorizationSession> >*)arg1 ;
-(void)authorizationDidNotHandle:(id)arg1 ;
-(void)authorizationDidCancel:(id)arg1 ;
-(void)authorizationDidComplete:(id)arg1 ;
-(void)authorization:(id)arg1 didCompleteWithHTTPAuthorizationHeaders:(id)arg2 ;
-(void)authorization:(id)arg1 didCompleteWithHTTPResponse:(id)arg2 httpBody:(id)arg3 ;
-(void)authorization:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)authorization:(id)arg1 presentViewController:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
@end

