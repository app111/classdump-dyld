/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:44 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface CLNotifierData : NSObject {

	void* _data;
	/*^block*/ id _destructor;

}

@property (assign,nonatomic) void* data;               //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) id destructor;              //@synthesize destructor=_destructor - In the implementation block
-(id)initWithData:(void*)arg1 destructor:(/*^block*/ id)arg2 ;
-(void)setDestructor:(/*^block*/ id)arg1 ;
-(/*^block*/ id)destructor;
-(void)dealloc;
-(void*)data;
-(void)setData:(void*)arg1 ;
-(void).cxx_destruct;
@end
