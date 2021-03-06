/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFStateMachineContextType.h>

@class SXQuickLookFile, NSString;

@interface SXQuickLookComponentPresentationTransitionContext : NSObject <NFStateMachineContextType> {

	SXQuickLookFile* _file;

}

@property (nonatomic,readonly) SXQuickLookFile * file;              //@synthesize file=_file - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXQuickLookFile *)file;
-(id)initWithFile:(id)arg1 ;
@end

