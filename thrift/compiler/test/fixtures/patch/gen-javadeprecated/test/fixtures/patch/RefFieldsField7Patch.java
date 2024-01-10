/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
package test.fixtures.patch;

import java.util.List;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;
import java.util.Set;
import java.util.HashSet;
import java.util.Collections;
import java.util.BitSet;
import java.util.Arrays;
import com.facebook.thrift.*;
import com.facebook.thrift.annotations.*;
import com.facebook.thrift.async.*;
import com.facebook.thrift.meta_data.*;
import com.facebook.thrift.server.*;
import com.facebook.thrift.transport.*;
import com.facebook.thrift.protocol.*;

@SuppressWarnings({ "unused", "serial" })
public class RefFieldsField7Patch implements TBase, java.io.Serializable, Cloneable, Comparable<RefFieldsField7Patch> {
  private static final TStruct STRUCT_DESC = new TStruct("RefFieldsField7Patch");
  private static final TField ASSIGN_FIELD_DESC = new TField("assign", TType.LIST, (short)1);
  private static final TField CLEAR_FIELD_DESC = new TField("clear", TType.BOOL, (short)2);
  private static final TField PREPEND_FIELD_DESC = new TField("prepend", TType.LIST, (short)8);
  private static final TField APPEND_FIELD_DESC = new TField("append", TType.LIST, (short)9);

  /**
   * Assigns to a (set) value.
   * 
   * If set, all other operations are ignored.
   * 
   * Note: Optional and union fields must be set before assigned.
   * 
   */
  public List<Integer> assign;
  /**
   * Clears a value. Applies first.
   */
  public boolean clear;
  /**
   * Prepends to the front of a given list.
   */
  public List<Integer> prepend;
  /**
   * Appends to the back of a given list.
   */
  public List<Integer> append;
  public static final int ASSIGN = 1;
  public static final int CLEAR = 2;
  public static final int PREPEND = 8;
  public static final int APPEND = 9;

  // isset id assignments
  private static final int __CLEAR_ISSET_ID = 0;
  private BitSet __isset_bit_vector = new BitSet(1);

  public static final Map<Integer, FieldMetaData> metaDataMap;

  static {
    Map<Integer, FieldMetaData> tmpMetaDataMap = new HashMap<Integer, FieldMetaData>();
    tmpMetaDataMap.put(ASSIGN, new FieldMetaData("assign", TFieldRequirementType.OPTIONAL, 
        new ListMetaData(TType.LIST, 
            new FieldValueMetaData(TType.I32))));
    tmpMetaDataMap.put(CLEAR, new FieldMetaData("clear", TFieldRequirementType.DEFAULT, 
        new FieldValueMetaData(TType.BOOL)));
    tmpMetaDataMap.put(PREPEND, new FieldMetaData("prepend", TFieldRequirementType.DEFAULT, 
        new ListMetaData(TType.LIST, 
            new FieldValueMetaData(TType.I32))));
    tmpMetaDataMap.put(APPEND, new FieldMetaData("append", TFieldRequirementType.DEFAULT, 
        new ListMetaData(TType.LIST, 
            new FieldValueMetaData(TType.I32))));
    metaDataMap = Collections.unmodifiableMap(tmpMetaDataMap);
  }

  static {
    FieldMetaData.addStructMetaDataMap(RefFieldsField7Patch.class, metaDataMap);
  }

  public RefFieldsField7Patch() {
  }

  public RefFieldsField7Patch(
      boolean clear,
      List<Integer> prepend,
      List<Integer> append) {
    this();
    this.clear = clear;
    setClearIsSet(true);
    this.prepend = prepend;
    this.append = append;
  }

  public RefFieldsField7Patch(
      List<Integer> assign,
      boolean clear,
      List<Integer> prepend,
      List<Integer> append) {
    this();
    this.assign = assign;
    this.clear = clear;
    setClearIsSet(true);
    this.prepend = prepend;
    this.append = append;
  }

  public static class Builder {
    private List<Integer> assign;
    private boolean clear;
    private List<Integer> prepend;
    private List<Integer> append;

    BitSet __optional_isset = new BitSet(1);

    public Builder() {
    }

    public Builder setAssign(final List<Integer> assign) {
      this.assign = assign;
      return this;
    }

    public Builder setClear(final boolean clear) {
      this.clear = clear;
      __optional_isset.set(__CLEAR_ISSET_ID, true);
      return this;
    }

    public Builder setPrepend(final List<Integer> prepend) {
      this.prepend = prepend;
      return this;
    }

    public Builder setAppend(final List<Integer> append) {
      this.append = append;
      return this;
    }

    public RefFieldsField7Patch build() {
      RefFieldsField7Patch result = new RefFieldsField7Patch();
      result.setAssign(this.assign);
      if (__optional_isset.get(__CLEAR_ISSET_ID)) {
        result.setClear(this.clear);
      }
      result.setPrepend(this.prepend);
      result.setAppend(this.append);
      return result;
    }
  }

  public static Builder builder() {
    return new Builder();
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public RefFieldsField7Patch(RefFieldsField7Patch other) {
    __isset_bit_vector.clear();
    __isset_bit_vector.or(other.__isset_bit_vector);
    if (other.isSetAssign()) {
      this.assign = TBaseHelper.deepCopy(other.assign);
    }
    this.clear = TBaseHelper.deepCopy(other.clear);
    if (other.isSetPrepend()) {
      this.prepend = TBaseHelper.deepCopy(other.prepend);
    }
    if (other.isSetAppend()) {
      this.append = TBaseHelper.deepCopy(other.append);
    }
  }

  public RefFieldsField7Patch deepCopy() {
    return new RefFieldsField7Patch(this);
  }

  /**
   * Assigns to a (set) value.
   * 
   * If set, all other operations are ignored.
   * 
   * Note: Optional and union fields must be set before assigned.
   * 
   */
  public List<Integer> getAssign() {
    return this.assign;
  }

  /**
   * Assigns to a (set) value.
   * 
   * If set, all other operations are ignored.
   * 
   * Note: Optional and union fields must be set before assigned.
   * 
   */
  public RefFieldsField7Patch setAssign(List<Integer> assign) {
    this.assign = assign;
    return this;
  }

  public void unsetAssign() {
    this.assign = null;
  }

  // Returns true if field assign is set (has been assigned a value) and false otherwise
  public boolean isSetAssign() {
    return this.assign != null;
  }

  public void setAssignIsSet(boolean __value) {
    if (!__value) {
      this.assign = null;
    }
  }

  /**
   * Clears a value. Applies first.
   */
  public boolean isClear() {
    return this.clear;
  }

  /**
   * Clears a value. Applies first.
   */
  public RefFieldsField7Patch setClear(boolean clear) {
    this.clear = clear;
    setClearIsSet(true);
    return this;
  }

  public void unsetClear() {
    __isset_bit_vector.clear(__CLEAR_ISSET_ID);
  }

  // Returns true if field clear is set (has been assigned a value) and false otherwise
  public boolean isSetClear() {
    return __isset_bit_vector.get(__CLEAR_ISSET_ID);
  }

  public void setClearIsSet(boolean __value) {
    __isset_bit_vector.set(__CLEAR_ISSET_ID, __value);
  }

  /**
   * Prepends to the front of a given list.
   */
  public List<Integer> getPrepend() {
    return this.prepend;
  }

  /**
   * Prepends to the front of a given list.
   */
  public RefFieldsField7Patch setPrepend(List<Integer> prepend) {
    this.prepend = prepend;
    return this;
  }

  public void unsetPrepend() {
    this.prepend = null;
  }

  // Returns true if field prepend is set (has been assigned a value) and false otherwise
  public boolean isSetPrepend() {
    return this.prepend != null;
  }

  public void setPrependIsSet(boolean __value) {
    if (!__value) {
      this.prepend = null;
    }
  }

  /**
   * Appends to the back of a given list.
   */
  public List<Integer> getAppend() {
    return this.append;
  }

  /**
   * Appends to the back of a given list.
   */
  public RefFieldsField7Patch setAppend(List<Integer> append) {
    this.append = append;
    return this;
  }

  public void unsetAppend() {
    this.append = null;
  }

  // Returns true if field append is set (has been assigned a value) and false otherwise
  public boolean isSetAppend() {
    return this.append != null;
  }

  public void setAppendIsSet(boolean __value) {
    if (!__value) {
      this.append = null;
    }
  }

  @SuppressWarnings("unchecked")
  public void setFieldValue(int fieldID, Object __value) {
    switch (fieldID) {
    case ASSIGN:
      if (__value == null) {
        unsetAssign();
      } else {
        setAssign((List<Integer>)__value);
      }
      break;

    case CLEAR:
      if (__value == null) {
        unsetClear();
      } else {
        setClear((Boolean)__value);
      }
      break;

    case PREPEND:
      if (__value == null) {
        unsetPrepend();
      } else {
        setPrepend((List<Integer>)__value);
      }
      break;

    case APPEND:
      if (__value == null) {
        unsetAppend();
      } else {
        setAppend((List<Integer>)__value);
      }
      break;

    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  public Object getFieldValue(int fieldID) {
    switch (fieldID) {
    case ASSIGN:
      return getAssign();

    case CLEAR:
      return new Boolean(isClear());

    case PREPEND:
      return getPrepend();

    case APPEND:
      return getAppend();

    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  @Override
  public boolean equals(Object _that) {
    if (_that == null)
      return false;
    if (this == _that)
      return true;
    if (!(_that instanceof RefFieldsField7Patch))
      return false;
    RefFieldsField7Patch that = (RefFieldsField7Patch)_that;

    if (!TBaseHelper.equalsNobinary(this.isSetAssign(), that.isSetAssign(), this.assign, that.assign)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.clear, that.clear)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetPrepend(), that.isSetPrepend(), this.prepend, that.prepend)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetAppend(), that.isSetAppend(), this.append, that.append)) { return false; }

    return true;
  }

  @Override
  public int hashCode() {
    return Arrays.deepHashCode(new Object[] {assign, clear, prepend, append});
  }

  @Override
  public int compareTo(RefFieldsField7Patch other) {
    if (other == null) {
      // See java.lang.Comparable docs
      throw new NullPointerException();
    }

    if (other == this) {
      return 0;
    }
    int lastComparison = 0;

    lastComparison = Boolean.valueOf(isSetAssign()).compareTo(other.isSetAssign());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(assign, other.assign);
    if (lastComparison != 0) { 
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetClear()).compareTo(other.isSetClear());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(clear, other.clear);
    if (lastComparison != 0) { 
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetPrepend()).compareTo(other.isSetPrepend());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(prepend, other.prepend);
    if (lastComparison != 0) { 
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetAppend()).compareTo(other.isSetAppend());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(append, other.append);
    if (lastComparison != 0) { 
      return lastComparison;
    }
    return 0;
  }

  public void read(TProtocol iprot) throws TException {
    TField __field;
    iprot.readStructBegin(metaDataMap);
    while (true)
    {
      __field = iprot.readFieldBegin();
      if (__field.type == TType.STOP) {
        break;
      }
      switch (__field.id)
      {
        case ASSIGN:
          if (__field.type == TType.LIST) {
            {
              TList _list312 = iprot.readListBegin();
              this.assign = new ArrayList<Integer>(Math.max(0, _list312.size));
              for (int _i313 = 0; 
                   (_list312.size < 0) ? iprot.peekList() : (_i313 < _list312.size); 
                   ++_i313)
              {
                int _elem314;
                _elem314 = iprot.readI32();
                this.assign.add(_elem314);
              }
              iprot.readListEnd();
            }
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case CLEAR:
          if (__field.type == TType.BOOL) {
            this.clear = iprot.readBool();
            setClearIsSet(true);
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case PREPEND:
          if (__field.type == TType.LIST) {
            {
              TList _list315 = iprot.readListBegin();
              this.prepend = new ArrayList<Integer>(Math.max(0, _list315.size));
              for (int _i316 = 0; 
                   (_list315.size < 0) ? iprot.peekList() : (_i316 < _list315.size); 
                   ++_i316)
              {
                int _elem317;
                _elem317 = iprot.readI32();
                this.prepend.add(_elem317);
              }
              iprot.readListEnd();
            }
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case APPEND:
          if (__field.type == TType.LIST) {
            {
              TList _list318 = iprot.readListBegin();
              this.append = new ArrayList<Integer>(Math.max(0, _list318.size));
              for (int _i319 = 0; 
                   (_list318.size < 0) ? iprot.peekList() : (_i319 < _list318.size); 
                   ++_i319)
              {
                int _elem320;
                _elem320 = iprot.readI32();
                this.append.add(_elem320);
              }
              iprot.readListEnd();
            }
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        default:
          TProtocolUtil.skip(iprot, __field.type);
          break;
      }
      iprot.readFieldEnd();
    }
    iprot.readStructEnd();


    // check for required fields of primitive type, which can't be checked in the validate method
    validate();
  }

  public void write(TProtocol oprot) throws TException {
    validate();

    oprot.writeStructBegin(STRUCT_DESC);
    if (this.assign != null) {
      if (isSetAssign()) {
        oprot.writeFieldBegin(ASSIGN_FIELD_DESC);
        {
          oprot.writeListBegin(new TList(TType.I32, this.assign.size()));
          for (int _iter321 : this.assign)          {
            oprot.writeI32(_iter321);
          }
          oprot.writeListEnd();
        }
        oprot.writeFieldEnd();
      }
    }
    oprot.writeFieldBegin(CLEAR_FIELD_DESC);
    oprot.writeBool(this.clear);
    oprot.writeFieldEnd();
    if (this.prepend != null) {
      oprot.writeFieldBegin(PREPEND_FIELD_DESC);
      {
        oprot.writeListBegin(new TList(TType.I32, this.prepend.size()));
        for (int _iter322 : this.prepend)        {
          oprot.writeI32(_iter322);
        }
        oprot.writeListEnd();
      }
      oprot.writeFieldEnd();
    }
    if (this.append != null) {
      oprot.writeFieldBegin(APPEND_FIELD_DESC);
      {
        oprot.writeListBegin(new TList(TType.I32, this.append.size()));
        for (int _iter323 : this.append)        {
          oprot.writeI32(_iter323);
        }
        oprot.writeListEnd();
      }
      oprot.writeFieldEnd();
    }
    oprot.writeFieldStop();
    oprot.writeStructEnd();
  }

  @Override
  public String toString() {
    return toString(1, true);
  }

  @Override
  public String toString(int indent, boolean prettyPrint) {
    String indentStr = prettyPrint ? TBaseHelper.getIndentedString(indent) : "";
    String newLine = prettyPrint ? "\n" : "";
    String space = prettyPrint ? " " : "";
    StringBuilder sb = new StringBuilder("RefFieldsField7Patch");
    sb.append(space);
    sb.append("(");
    sb.append(newLine);
    boolean first = true;

    if (isSetAssign())
    {
      sb.append(indentStr);
      sb.append("assign");
      sb.append(space);
      sb.append(":").append(space);
      if (this.getAssign() == null) {
        sb.append("null");
      } else {
        sb.append(TBaseHelper.toString(this.getAssign(), indent + 1, prettyPrint));
      }
      first = false;
    }
    if (!first) sb.append("," + newLine);
    sb.append(indentStr);
    sb.append("clear");
    sb.append(space);
    sb.append(":").append(space);
    sb.append(TBaseHelper.toString(this.isClear(), indent + 1, prettyPrint));
    first = false;
    if (!first) sb.append("," + newLine);
    sb.append(indentStr);
    sb.append("prepend");
    sb.append(space);
    sb.append(":").append(space);
    if (this.getPrepend() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this.getPrepend(), indent + 1, prettyPrint));
    }
    first = false;
    if (!first) sb.append("," + newLine);
    sb.append(indentStr);
    sb.append("append");
    sb.append(space);
    sb.append(":").append(space);
    if (this.getAppend() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this.getAppend(), indent + 1, prettyPrint));
    }
    first = false;
    sb.append(newLine + TBaseHelper.reduceIndent(indentStr));
    sb.append(")");
    return sb.toString();
  }

  public void validate() throws TException {
    // check for required fields
  }

}

