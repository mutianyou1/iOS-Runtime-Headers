/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DKExtensionRegistry <NSObject>
@property (nonatomic,readonly) Class extensionClass; 
@property (nonatomic,readonly) Class responseObjectClass; 
@required
-(void)addExtensionAdapter:(id)arg1;
-(void)enumerateExtensionAdaptersWithBlock:(/*^block*/id)arg1;
-(Class)extensionClass;
-(Class)responseObjectClass;

@end

