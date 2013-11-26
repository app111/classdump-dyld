/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:27 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VGLMesh.h>

@class NSMutableData, NSMutableArray;

@interface VGLMultiTexturedMesh : VGLMesh {

	int _sectionCount;
	NSMutableData* _ranges;
	NSMutableArray* _textures;

}
-(void)dealloc;
-(void)drawTrianglesWithContext:(id)arg1 ;
-(id)initWithStride:(int)arg1 primitiveType:(int)arg2 attributes:(const SCD_Struct_VG120*)arg3 attributeCount:(unsigned char)arg4 vertices:(const void*)arg5 vertexCount:(int)arg6 indices:(const unsigned short*)arg7 indexCount:(int)arg8 ;
-(void)addSectionOffset:(int)arg1 count:(int)arg2 texture:(id)arg3 ;
-(int)stride;
-(id)ranges;
@end
