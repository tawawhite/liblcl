
//----------------------------------------
// The code is automatically generated by the GenlibLcl tool.
// Copyright © ying32. All Rights Reserved.
// 
// Licensed under Apache License 2.0
//
//----------------------------------------

function ImageList_Create(AOwner: TComponent): TImageList; extdecl;
begin
  handleExceptionBegin
  Result :=  TImageList.Create(AOwner);
  handleExceptionEnd
end;

procedure ImageList_Free(AObj: TImageList); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

procedure ImageList_GetHotSpot(AObj: TImageList; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.GetHotSpot;
  handleExceptionEnd
end;

procedure ImageList_HideDragImage(AObj: TImageList); extdecl;
begin
  handleExceptionBegin
  AObj.HideDragImage;
  handleExceptionEnd
end;

procedure ImageList_ShowDragImage(AObj: TImageList); extdecl;
begin
  handleExceptionBegin
  AObj.ShowDragImage;
  handleExceptionEnd
end;

procedure ImageList_Assign(AObj: TImageList; Source: TPersistent); extdecl;
begin
  handleExceptionBegin
  AObj.Assign(Source);
  handleExceptionEnd
end;

function ImageList_Add(AObj: TImageList; Image: TBitmap; Mask: TBitmap): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Add(Image, Mask);
  handleExceptionEnd
end;

function ImageList_AddIcon(AObj: TImageList; Image: TIcon): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.AddIcon(Image);
  handleExceptionEnd
end;

procedure ImageList_AddImages(AObj: TImageList; Value: TCustomImageList); extdecl;
begin
  handleExceptionBegin
  AObj.AddImages(Value);
  handleExceptionEnd
end;

function ImageList_AddMasked(AObj: TImageList; Image: TBitmap; MaskColor: TColor): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.AddMasked(Image, MaskColor);
  handleExceptionEnd
end;

procedure ImageList_Clear(AObj: TImageList); extdecl;
begin
  handleExceptionBegin
  AObj.Clear;
  handleExceptionEnd
end;

procedure ImageList_Delete(AObj: TImageList; Index: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Delete(Index);
  handleExceptionEnd
end;

procedure ImageList_Insert(AObj: TImageList; Index: Integer; Image: TBitmap; Mask: TBitmap); extdecl;
begin
  handleExceptionBegin
  AObj.Insert(Index, Image, Mask);
  handleExceptionEnd
end;

procedure ImageList_InsertIcon(AObj: TImageList; Index: Integer; Image: TIcon); extdecl;
begin
  handleExceptionBegin
  AObj.InsertIcon(Index, Image);
  handleExceptionEnd
end;

procedure ImageList_InsertMasked(AObj: TImageList; Index: Integer; Image: TBitmap; MaskColor: TColor); extdecl;
begin
  handleExceptionBegin
  AObj.InsertMasked(Index, Image, MaskColor);
  handleExceptionEnd
end;

procedure ImageList_Move(AObj: TImageList; CurIndex: Integer; NewIndex: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Move(CurIndex, NewIndex);
  handleExceptionEnd
end;

procedure ImageList_Replace(AObj: TImageList; Index: Integer; Image: TBitmap; Mask: TBitmap); extdecl;
begin
  handleExceptionBegin
  AObj.Replace(Index, Image, Mask);
  handleExceptionEnd
end;

procedure ImageList_ReplaceMasked(AObj: TImageList; Index: Integer; NewImage: TBitmap; MaskColor: TColor); extdecl;
begin
  handleExceptionBegin
  AObj.ReplaceMasked(Index, NewImage, MaskColor);
  handleExceptionEnd
end;

procedure ImageList_BeginUpdate(AObj: TImageList); extdecl;
begin
  handleExceptionBegin
  AObj.BeginUpdate;
  handleExceptionEnd
end;

procedure ImageList_EndUpdate(AObj: TImageList); extdecl;
begin
  handleExceptionBegin
  AObj.EndUpdate;
  handleExceptionEnd
end;

function ImageList_FindComponent(AObj: TImageList; AName: PChar): TComponent; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.FindComponent(AName);
  handleExceptionEnd
end;

function ImageList_GetNamePath(AObj: TImageList): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.GetNamePath);
  handleExceptionEnd
end;

function ImageList_HasParent(AObj: TImageList): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.HasParent;
  handleExceptionEnd
end;

function ImageList_ClassType(AObj: TImageList): TClass; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClassType;
  handleExceptionEnd
end;

function ImageList_ClassName(AObj: TImageList): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  ToPChar(AObj.ClassName);
  handleExceptionEnd
end;

function ImageList_InstanceSize(AObj: TImageList): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.InstanceSize;
  handleExceptionEnd
end;

function ImageList_InheritsFrom(AObj: TImageList; AClass: TClass): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.InheritsFrom(AClass);
  handleExceptionEnd
end;

function ImageList_Equals(AObj: TImageList; Obj: TObject): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Equals(Obj);
  handleExceptionEnd
end;

function ImageList_GetHashCode(AObj: TImageList): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.GetHashCode;
  handleExceptionEnd
end;

function ImageList_ToString(AObj: TImageList): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.ToString);
  handleExceptionEnd
end;

function ImageList_GetBlendColor(AObj: TImageList): TColor; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.BlendColor;
  handleExceptionEnd
end;

procedure ImageList_SetBlendColor(AObj: TImageList; AValue: TColor); extdecl;
begin
  handleExceptionBegin
  AObj.BlendColor := AValue;
  handleExceptionEnd
end;

function ImageList_GetBkColor(AObj: TImageList): TColor; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.BkColor;
  handleExceptionEnd
end;

procedure ImageList_SetBkColor(AObj: TImageList; AValue: TColor); extdecl;
begin
  handleExceptionBegin
  AObj.BkColor := AValue;
  handleExceptionEnd
end;

function ImageList_GetAllocBy(AObj: TImageList): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.AllocBy;
  handleExceptionEnd
end;

procedure ImageList_SetAllocBy(AObj: TImageList; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.AllocBy := AValue;
  handleExceptionEnd
end;

function ImageList_GetDrawingStyle(AObj: TImageList): TDrawingStyle; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DrawingStyle;
  handleExceptionEnd
end;

procedure ImageList_SetDrawingStyle(AObj: TImageList; AValue: TDrawingStyle); extdecl;
begin
  handleExceptionBegin
  AObj.DrawingStyle := AValue;
  handleExceptionEnd
end;

function ImageList_GetHeight(AObj: TImageList): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Height;
  handleExceptionEnd
end;

procedure ImageList_SetHeight(AObj: TImageList; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Height := AValue;
  handleExceptionEnd
end;

function ImageList_GetImageType(AObj: TImageList): TImageType; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ImageType;
  handleExceptionEnd
end;

procedure ImageList_SetImageType(AObj: TImageList; AValue: TImageType); extdecl;
begin
  handleExceptionBegin
  AObj.ImageType := AValue;
  handleExceptionEnd
end;

function ImageList_GetMasked(AObj: TImageList): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Masked;
  handleExceptionEnd
end;

procedure ImageList_SetMasked(AObj: TImageList; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Masked := AValue;
  handleExceptionEnd
end;

//EVENT_TYPE:TNotifyEvent
procedure ImageList_SetOnChange(AObj: TImageList; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent_OnChange}
  {$DEFINE EventName := OnChange}
  EventMethodCode
end;

function ImageList_GetShareImages(AObj: TImageList): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ShareImages;
  handleExceptionEnd
end;

procedure ImageList_SetShareImages(AObj: TImageList; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ShareImages := AValue;
  handleExceptionEnd
end;

function ImageList_GetWidth(AObj: TImageList): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Width;
  handleExceptionEnd
end;

procedure ImageList_SetWidth(AObj: TImageList; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Width := AValue;
  handleExceptionEnd
end;

function ImageList_GetDragCursor(AObj: TImageList): TCursor; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DragCursor;
  handleExceptionEnd
end;

procedure ImageList_SetDragCursor(AObj: TImageList; AValue: TCursor); extdecl;
begin
  handleExceptionBegin
  AObj.DragCursor := AValue;
  handleExceptionEnd
end;

function ImageList_GetDragging(AObj: TImageList): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Dragging;
  handleExceptionEnd
end;

function ImageList_GetCount(AObj: TImageList): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Count;
  handleExceptionEnd
end;

function ImageList_GetComponentCount(AObj: TImageList): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ComponentCount;
  handleExceptionEnd
end;

function ImageList_GetComponentIndex(AObj: TImageList): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ComponentIndex;
  handleExceptionEnd
end;

procedure ImageList_SetComponentIndex(AObj: TImageList; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ComponentIndex := AValue;
  handleExceptionEnd
end;

function ImageList_GetOwner(AObj: TImageList): TComponent; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Owner;
  handleExceptionEnd
end;

function ImageList_GetName(AObj: TImageList): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.Name);
  handleExceptionEnd
end;

procedure ImageList_SetName(AObj: TImageList; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Name := AValue;
  handleExceptionEnd
end;

function ImageList_GetTag(AObj: TImageList): NativeInt; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Tag;
  handleExceptionEnd
end;

procedure ImageList_SetTag(AObj: TImageList; AValue: NativeInt); extdecl;
begin
  handleExceptionBegin
  AObj.Tag := AValue;
  handleExceptionEnd
end;

function ImageList_GetComponents(AObj: TImageList; AIndex: Integer): TComponent; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Components[AIndex];
  handleExceptionEnd
end;

function ImageList_StaticClassType: TClass; extdecl;
begin
  Result := TImageList;
end;

exports
  ImageList_Create,
  ImageList_Free,
  ImageList_GetHotSpot,
  ImageList_HideDragImage,
  ImageList_ShowDragImage,
  ImageList_Assign,
  ImageList_Add,
  ImageList_AddIcon,
  ImageList_AddImages,
  ImageList_AddMasked,
  ImageList_Clear,
  ImageList_Delete,
  ImageList_Insert,
  ImageList_InsertIcon,
  ImageList_InsertMasked,
  ImageList_Move,
  ImageList_Replace,
  ImageList_ReplaceMasked,
  ImageList_BeginUpdate,
  ImageList_EndUpdate,
  ImageList_FindComponent,
  ImageList_GetNamePath,
  ImageList_HasParent,
  ImageList_ClassType,
  ImageList_ClassName,
  ImageList_InstanceSize,
  ImageList_InheritsFrom,
  ImageList_Equals,
  ImageList_GetHashCode,
  ImageList_ToString,
  ImageList_GetBlendColor,
  ImageList_SetBlendColor,
  ImageList_GetBkColor,
  ImageList_SetBkColor,
  ImageList_GetAllocBy,
  ImageList_SetAllocBy,
  ImageList_GetDrawingStyle,
  ImageList_SetDrawingStyle,
  ImageList_GetHeight,
  ImageList_SetHeight,
  ImageList_GetImageType,
  ImageList_SetImageType,
  ImageList_GetMasked,
  ImageList_SetMasked,
  ImageList_SetOnChange,
  ImageList_GetShareImages,
  ImageList_SetShareImages,
  ImageList_GetWidth,
  ImageList_SetWidth,
  ImageList_GetDragCursor,
  ImageList_SetDragCursor,
  ImageList_GetDragging,
  ImageList_GetCount,
  ImageList_GetComponentCount,
  ImageList_GetComponentIndex,
  ImageList_SetComponentIndex,
  ImageList_GetOwner,
  ImageList_GetName,
  ImageList_SetName,
  ImageList_GetTag,
  ImageList_SetTag,
  ImageList_GetComponents,
  ImageList_StaticClassType;
