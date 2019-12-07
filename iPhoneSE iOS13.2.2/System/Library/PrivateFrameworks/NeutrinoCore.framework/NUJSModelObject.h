/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:47 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NUJSObject.h>

@class NUModel;

@interface NUJSModelObject : NUJSObject {

	NUModel* _model;

}

@property (nonatomic,readonly) NUModel * model;              //@synthesize model=_model - In the implementation block
+(id)JSValueWithModel:(id)arg1 object:(id)arg2 context:(id)arg3 ;
-(id)description;
-(void)reset;
-(NUModel *)model;
-(id)toObject;
-(BOOL)hasProperty:(id)arg1 ;
-(id)initWithRepresentedObject:(id)arg1 context:(id)arg2 ;
-(id)initWithModel:(id)arg1 representedObject:(id)arg2 context:(id)arg3 ;
-(void)enumerateProperties:(/*^block*/id)arg1 ;
-(id)valueForProperty:(id)arg1 context:(id)arg2 error:(out id*)arg3 ;
@end
