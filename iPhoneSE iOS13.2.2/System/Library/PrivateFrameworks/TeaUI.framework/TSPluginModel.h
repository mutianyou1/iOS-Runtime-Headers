/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:16 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TeaUI/TeaUI-Structs.h>
@class NSString, UIViewController;

@interface TSPluginModel : NSObject {

	 identifier;
	 revision;
	 size;
	 viewController;

}

@property (readonly,nonatomic) NSString * identifier; 
@property (readonly,nonatomic) long long revision; 
@property (readonly,nonatomic) CGSize size; 
@property (readonly,nonatomic) UIViewController * viewController; 
@property (readonly,nonatomic) long long hash; 
-(id)init;
-(long long)hash;
-(NSString *)identifier;
-(CGSize)size;
-(long long)revision;
-(UIViewController *)viewController;
@end
