/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RBDomainAttributeManaging <NSObject>
@required
-(id)attributesForDomain:(id)arg1 andName:(id)arg2 targetProperties:(id)arg3 withError:(id*)arg4;
-(id)originatorEntitlementsForDomain:(id)arg1 andName:(id)arg2;
-(id)endowmentNamespaceForDomain:(id)arg1 andName:(id)arg2;
-(BOOL)containsAttributeWithDomain:(id)arg1 andName:(id)arg2;
-(id)allEntitlements;
-(BOOL)areTargetPropertiesValid:(id)arg1 forAttributeWithDomain:(id)arg2 andName:(id)arg3;

@end
